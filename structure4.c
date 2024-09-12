#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

void printinfo(struct student s1);

void main()
{
    struct student s1={25,8.5,};
    printinfo(s1);

}
void printinfo(struct student s1)
{
    printf("student information : \n");
    printf("student roll = %d \n",s1.roll);
    printf("student name = %s \n",s1.name);
    printf("student sgpa = %f \n",s1.cgpa);
}