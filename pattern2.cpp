#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    //  #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 

    int n,i,j;
    cout<<"enter the star: ";
    cin>>n;

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}
