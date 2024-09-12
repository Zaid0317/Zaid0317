#include<iostream>
using namespace std;
//reversing number through cpp
int main()
{
    int i,n,r=0,x;
    cout<<"enter a number: ";
    cin>>n;
    x=n;

    while(n>0){
        i=n%10;//extracting last digit in 'i'
        n=n/10;
        r=(r*10)+i;// r is for reverse and then we multipling r*10 and adding i
    }
    cout<<"reverse number is="<<r<<endl;

        cout<<"number reversed"<<endl;

    return 0;
}