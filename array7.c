#include<stdio.h>
//call by reference
void display(int *);
void main()
{
    int i;
    int marks[]={66,85,55,75,64};
    for(i=0;i<5;i++)
        display(&marks[i]);
}
    void display(int *m)
    {
        printf("%d \t", *m);
    }
