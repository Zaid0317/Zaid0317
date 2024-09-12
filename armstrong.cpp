#include<iostream>
using namespace std;

int main()
{
    int i,n,x,arm,s=0;
    cout<<"enter a number: ";
    cin>>n;
    i=n;

   while(n>0){
    x=n%10;
    n=n/10;
    arm=x*x*x;//or we can add math function (pow)
    s=s+arm;
   }
   cout<<"the number is: "<<s<<endl;
   if(s==i){
    cout<<"number is armstong"<<endl;
   }
   else{
    cout<<"number is not an armstong"<<endl;
   }
   return 0;
}