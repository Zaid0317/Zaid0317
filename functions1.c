#include<stdio.h>
//with return type,without parameter
//niven number
int niven();
void main()
{
    int a;
    a=niven();
}
int niven()
{
    int n,x,y,sum=0;
    printf("input a number \n");
    scanf("%d",&n);
    y=n;
    while(n>0)
    {
        x=n%10;
        n=n/10;
        sum=sum+x;
    }
    if(y%sum==0)
    {
        printf("number is niven");
    }
    else
    printf("number is not niven");
    return y;
}