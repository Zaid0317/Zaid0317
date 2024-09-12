#include<stdio.h>
#include<string.h>
//program
void main()
{
    char str[100];
    char c;
    int i;
    printf("enter the string  \n");
    for(i=0;c!='\n';i++)
    {
        scanf("%c",&c);
        str[i]=c;
    }
       str[i]='\0';
    puts(str);
}