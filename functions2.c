#include<stdio.h>
//with return type,with paramter.
//armstrong number
int armstrong(int a);
void main()
{
    int n,z;
    printf("enter a number \n");
    scanf("%d",&n);
    z=armstrong(n);
    //printf("armstrong number is=%d",z);
}
int armstrong(int a)
{
    int x,y,s=0;
    y=a;
    while(a>0)
    {
        x=a%10;
        a=a/10;
        s=s+(x*x*x);
    }
    if(s==y)
    {
    printf("number is armstrong \n");
    }
    else
    {
    printf("number is not an armstrong \n");
    }
    return y;
}