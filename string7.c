#include<stdio.h>
#include<string.h>
//reversing a string by using strrev()
void main()
{
    char str1[50];
    printf("enter the first string to be reversed \n");
    fgets(str1,50,stdin);
    strrev(str1);
    puts(str1);
}