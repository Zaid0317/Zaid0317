#include<iostream>
using namespace std;

int main()
{
 int i,n;
 cout<<"enter the number: ";
 cin>>n;

int array[n];
   for(i=0;i<n;i++)
   {
     cin>>array[i];
   }
    for(i=0;i<n;i++)
   {
     cout<<array[i]<<" ";
   }
    return 0;
}