#include<stdio.h>
#include<string.h>
//using library function through string by calling strlen
//through dynamic(user definied)
void main()
{
    char name[50];
    printf("enter your first name \n");
    gets(name);
    int length=strlen(name);
    printf("length is : %d",length);
}