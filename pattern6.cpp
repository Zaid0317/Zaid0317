#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,c=0;
    cout<<"enter a number: ";
    cin>>n;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
          cout<<"non-prime"<<endl;
          c=1;
          break;
        }
    }
        if(c==0){
            cout<<"prime"<<endl;
        }
    return 0;
}