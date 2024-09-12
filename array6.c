#include<stdio.h>
//selection sorting
void main()
{
    int a[5];
    int i,j,min,t;
    printf("input the values \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        min=a[i];
        for(j=i+1;j<5;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
            }
        }
        if(a[i]>min)
        {
            t=a[i];
            a[i]=min;
            min=t;
        }
    }
}