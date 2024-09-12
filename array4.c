#include<stdio.h>
/*WAP to create an array & display the smallest and largest
element in array*/
void main()
{
    int a[5];
    int i,c,small,big;
    printf("input the number \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    small=a[0];
    big=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }
        if(a[i]>big)
        {
            big=a[i];
        }
    }
    printf("smallest value is %d ",small);
    printf("biggest value is %d",big);
}