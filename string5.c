#include<stdio.h>
#include<string.h>
//concatenation in string(strcat)
void main()
{
char str1[100];
printf("enter the first string \n");
gets(str1);
char str2[100];
printf("enter the second string \n");
gets(str2);
strcat(str1,str2);
puts(str1);
}