#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"input a character:  ";
    cin>>button;

    switch(button)
    {
case 'a':
cout<<"hello"<<endl;
break;
case 'b':
cout<<"namaste"<<endl;
break;
case 'c':
cout<<"hii"<<endl;
break;
case 'd':
cout<<"ciao"<<endl;
break;
default:
cout<<"i am still learning";
break;
    }
    return 0;
}