/*4. Create a structure student in C to store the following information about a student:
i. name, a string (an array) of 11 characters.
ii. roll, an integer.
iii. sex, a character, ‘M’ (male), ‘F’ (female), ‘T’ (third gender/ other).
iv. gpa, i.e., grade point average, a real (double) value.
*/
#include<stdio.h>


#pragma pack(1)


struct student
{
    char name[10];
    int Roll;
    char sex;
    double gpa;
};

void scanStudent(struct student* p_stu)
{
    printf("Enter Name, Roll, sex, gpa: ");
    scanf("%s %d %c %g", &p_stu->name, &p_stu->Roll, &p_stu->sex, &p_stu->gpa);
}

void printStudent(struct student* p_stu)
{
    printf("p_stu->name = %s p_stu->Roll = %d p_stu->sex = %c p_stu->gpa = %g", p_stu->name, p_stu->Roll, p_stu->sex, p_stu->gpa);
}

int main()
{
    struct student s1 = {"Siddharth", 189, 'M', 9.88};
    struct student s2 = {0};

    printf("Roll of s1 is: %d\n\n", s1.Roll);


    printf("add of s1 is: %d\nadd of Roll of s1 is: %d\nadd of Name of s1 is: %d\n\n", &s1, &s1.Roll, &s1.name);

    printf("size of s1 is: %d\n", sizeof(s1));
    printf("size of Roll of s1 is: %d\n", sizeof(s1.Roll));
    printf("size of s2 is: %d\n\n", sizeof(s2));


/****** After using "#pragma pack(1)" the size of structure reduces from 32 to 23 since it makes the padding 0 ***********/

    printf("\nPart 3 \n");

    struct student s4 = {"Menash", 191, 'M', 9.97};
    printf("add of s4 is: %d\n", &(s4));
    printf("add of name of s4 is: %d\n", &(s4.name));
    printf("add of Roll of s4 is: %d\n", &(s4.Roll));
    printf("add of sex of s4 is: %d\n", &(s4.sex));
    printf("add of GPA of s4 is: %d\n", &(s4.gpa));
    printf("size of s1 is: %d\n", sizeof(s4));


/****/printf("\nPart 4 \n");/*************************************************************************************/
    struct student s[5];

    for(int i = 0; i <= 4; i++)
    {
        printf("Enter Name, Roll, sex, gpa: ");
        scanf("%s %d %c %g", &s[i].name, &s[i].Roll, &s[i].sex, &s[i].gpa);
    }
    printf("\n");
    for(int i = 0; i <= 4; i++)
    {
        printf("%s %d %c %g\n", s[i].name, s[i].Roll, s[i].sex, s[i].gpa);
    }

/****/printf("\nPart 5 \n");/*************************************************************************************/
    scanStudent(&s2);
    printStudent(&s2);


    return 0;
}
