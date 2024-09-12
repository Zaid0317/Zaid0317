#include<iostream>
using namespace std;
void fib(int f);
 
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;

    fib(n);

    return 0;
}
void fib(int f){
    int n1=0,n2=1,n3;
    for(int i=1;i<=f;i++){
        cout<<n1<<endl;
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    return;
}