#include<stdio.h>
//wihtout return type, without parameter
//prime palindromic
void prime();
void main()
{
    printf("input a number \n");
    prime();
}
void prime()
{
    int i,n,x,y,s=0,c=0;
    scanf("%d",&n);
    y=n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c=c+1;
    }
    if(c==2)
    {
        while(n>0)
        {
            x=n%10;
            n=n/10;
            s=(s*10)+x;
        }
        if(s==y)
        {
            printf("number is prime palindromic");
        }
            else
            printf("number is not a prime palindromic");
        }
        else
        printf("it is not prime number");
    }