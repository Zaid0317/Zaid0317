#include<stdio.h>
//2 dimensional array
void main()
{
    int a[2][2];
    int b[2][2];
    int c[2][2];
    int i,j;
    printf("enter the value of array 'a' \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the value of array 'b' \n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
}
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
}
 for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("sum of all value is %d \n",c[i][j]);
        }
    }
}