# include<stdio.h>
// reversing a number through loop
void main()  {
   int n,x,s=0;
   printf("enter a number \t");
   scanf("%d",&n);
   while(n>0)
   {
    x=n%10;
    n=n/10;
    s=(s*10)+x;
   }
printf("reverse number is %d",s);   
}

