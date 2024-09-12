#include<stdio.h>
//call by refernce
void display(int *);
void show(int);
void main()
{
    int marks[]={55,40,60,70,80};
    int i;
    for(i=0;i<5;i++)
    display(&marks[i]);
}
void display(int *n)
{
    show(&n);
}
void show(int)
{
    int m;
    printf("%u \t",m);
}