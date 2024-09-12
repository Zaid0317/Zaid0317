#include<stdio.h>
//using function in array
void sum1(int *s[]);
void main()
{
int a[5];
int i,j;
printf("input the numbers \n");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
//for(i=0;i<5;i++)
//{
  //  j=sum1(&a[i]);
//}
sum1(&a[5]);
//printf("sum=%d",j);
}
void sum1(int *s[])
{
    int z=0;
//printf("values recieved= \n");
//for(int i=0;i<5;i++)
//{
    printf("%d\n",*s[i]);
    z=z+*s[i];
//}
printf("sum=%d", z);
//return z;
}

