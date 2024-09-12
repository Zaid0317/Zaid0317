#include<iostream>
#include<climits>
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
int maxNo=INT_MIN;
int minNo=INT_MAX;

for(i=0;i<n;i++){
maxNo=max(maxNo,array[i]);
minNo=min(minNo,array[i]);
}
cout<<maxNo<<" "<<minNo;
   return 0;
}