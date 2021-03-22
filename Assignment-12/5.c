# include <stdio.h>


typedef float (*FloatFunctionFloatFloat) (float, float);


float add(float x, float y)
{
    return x + y;
}

float sub(float x, float y)
{
    return x - y;

}
float mul(float x, float y)
{
    return x * y;

}
float div(float x, float y)
{
    return x / y;

}
FloatFunctionFloatFloat inverse(FloatFunctionFloatFloat function)
{
    if (function == add)
    {
        return sub;

    }
    if (function == sub)
    {
        return add;

    }
    if (function == div)
    {
        return mul;

    }
    if (function == mul)
    {
        return div;

    }
    return NULL;

}
int main()
{
    float x = 6, y = 4;
    float z = (mul - add + sub)(x, y); // calls div(x, y)
    printf("(mul - add + sub)(%g, %g) = %g\n", x, y, z);
    printf("(mul - add + sub) = %p, div = %p\n", mul - add + sub, div);
    FloatFunctionFloatFloat f = add;
    float w = inverse(f)(f(x, y), y); // calls sub(add(x, y), y)
    printf("inverse(f)(f(%g, %g), %g) = %g\n", x, y, y, w);
    return 0;

}

