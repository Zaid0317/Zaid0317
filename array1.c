#include<stdio.h>
//linear search program on 10 numbers
//array
void main()
{
    int a[10];
    int i,c=0,x;
    printf("input 10 numbers \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("values for search are: ");
    scanf("%d",&x);
    for(i=0;i<10;i++)
    {
        if(x==a[i]) 
        {
            c=1;
            break;
        }
    }
    if(c==1)
    printf("element found");
    else
    printf("element not found");
}