#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float sgpa;
    char name[100];
};
void main()
{
   struct student s1={23,8.5, "zaid"}; /*we can write in a single line also like this as we are creating
    these 3 of them by putting operator '.' */
    printf("student roll= %d \n",s1.roll);//u can print any of these 'name,sgpa or roll' like this
    // struct student s1;
    // s1.roll=23;
    // s1.sgpa=8.5;
    // strcpy(s1.name , "zaid");

    // printf("student name = %s \n",s1.name);
    // printf("student roll number = %d \n",s1.roll);
    // printf("student sgpa = %f \n",s1.sgpa);
    printf("\n");

    struct student s2;
    s2.roll=25;
    s2.sgpa=7.5;
    strcpy(s2.name , "bushra");

    printf("student name= %s \n",s2.name);
    printf("student roll number= %d \n",s2.roll);
    printf("student sgpa= %f \n",s2.sgpa);
    printf("\n");

    struct student s3;
    s3.roll=35;
    s3.sgpa=9.5;
    strcpy(s3.name , "ayesha");

    printf("student name= %s \n",s3.name);
    printf("student roll number= %d \n",s3.roll);
    printf("student sgpa= %f \n",s3.sgpa);
    printf("\n");
}