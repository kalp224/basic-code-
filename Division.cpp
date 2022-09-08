#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"enter dividend";
    cin>>x;
    cout<<"enter divisor";
    cin>>y;
    if (y==0)
        cout<<"chutiya ban gya";
    else
    {
        cout<<"result is"<<x/y;
    }
    return 0;
}