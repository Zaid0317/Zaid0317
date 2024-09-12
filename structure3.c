#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float sgpa;
    char name[100];
};
//using pointer
void main()
{
    struct student s1={23,9.8, "zaid"};
    struct student *ptr=&s1;
    printf("student roll with pointer= %d \n",(*ptr).roll);
    //using hyphen(-) and greater than symbol(>)=(->)
    printf("student roll with -> sign = %d \n",ptr->roll);
    printf("student name with -> sign = %s \n",ptr->name);
    printf("student sgpa with -> sign = %f \n",ptr->sgpa);

}