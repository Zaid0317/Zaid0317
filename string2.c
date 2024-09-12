#include<stdio.h>
//input the first name and count the length
int countlength(char arr[]);
void main()
{
    char name[100];
    printf("enter your first name \n");
    fgets(name,100,stdin);
    printf("length is: %d",countlength(name));
}
int countlength(char arr[])
{
int i,c=0;
for(i=0;arr[i]!='\0';i++)
{
    c++;
}
return c-1;
}