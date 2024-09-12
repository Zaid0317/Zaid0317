#include<stdio.h>
#include<string.h>
//comparing string by using strcmp()
void main()
{
    char first[100];
    printf("enter the first string \n");
    fgets(first,100,stdin);
    char second[100];
    printf("enter the second string to be compared \n");
    fgets(second,100,stdin);
    printf("%d",strcmp(first,second));

}