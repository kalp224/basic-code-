#include<iostream>
using namespace std;
int main()
{
    int a,b,x,c;
    cout<<"enter choice";
    cin>>x;
    cout<<"enter 2 numbers";
    cin>>a>>b;
    switch(x)
    {
        case 1:c=a+b;
         break;
        case 2:c=a-b;
         break; 
    }
    cout<<"result is"<<c;
    
    return 0;
}