#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float sgpa;
    char name[100];
};
void main()
{
    struct student s1 ={23,8.5, "zaid"};
    printf("student roll %d \n",s1.roll);
    }