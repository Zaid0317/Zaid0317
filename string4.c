#include<stdio.h>
#include<string.h>
//using string function "strcpy"
void main()
{
    //char arr[50];
    // printf("enter the string \n");
    // gets(arr);
    char old[50];
    printf("enter the old str\n");
    gets(old);
    char new[50];
    printf("enter the new str\n");
    gets(new);
    strcpy(new,old);
    puts(new);
}