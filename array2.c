#include<stdio.h>
//binary search 
//array
void main()
{
    int a[11];
    int i,x,c=0,mid,lb=0,ub=10;
    printf("input the number \n");
    for(i=0;i<11;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter the number to be searched: \n");
    scanf("%d",&x);
    while(lb<=ub)
    {
        if(a[mid]==x)
        {
            c=1;
            break;
        }
        else if(x>a[mid])
        {
            lb=mid+1;
            mid=(lb+ub)/2;
        }
        else if(x<a[mid])
        {
            ub=mid-1;
            mid=(lb+ub)/2;
        }
    }
    if(c==1)
    printf("search found");
    else
    printf("search not found");
}