# include <stdio.h>
# include <stdarg.h>

double add(const char *format, ...)   // function taking variable number of arguments
{
    double total = 0.0;
    va_list list;
    va_start(list, format);
    for (int i = 0; format[i]!= '\0'; i++)
    {
        int s = format[i];
        switch (s)
        {
        case 'c' : // char is promoted to int va_list 12 case 'i' : total += va_arg(list, int); 13 break;
        case 'f' : // float is promoted to double in va_list
        case 'd' :
            total += va_arg(list, double);
            break;
        default :
            break;

        }

    }
    return total;

}
int main(int argc, char *argv[])
{

  // Pseudo function overloading in C
    printf("add(\"c\", 'a') = %lg\n", add("c", 'a'));
    printf("add(\"cf\", 'a', 1.0) = %lg\n", add("cf", 'a', 1.0));
    printf("add(\"cid\", 'a', 1, 2.0) = %lg\n", add("cid", 'a', 1, 2.0));
    return 0;

}

