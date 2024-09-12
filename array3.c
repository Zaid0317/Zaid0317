#include<stdio.h>
//sorting in array(bubble sort)
//array
void main()
{
    int a[5];
    int i,j,t;
    printf("input the numbers \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5-1;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
    }
    printf("sorted values are ");
    for(i=0;i<5;i++)
    {
        printf("%d \t",a[i]);
    }
}
