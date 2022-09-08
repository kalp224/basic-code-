#include<iostream>
using namespace std;
int main()
{
    float a,b,c,D;
    cout<<"enter a,b,c in quadratic eq.";
    cin>>a>>b>>c;
    D=b*b-4*a*c;
    if(D==0)
    {
        cout<<"Equal roots";
    }
    else
    {
        if(D>0)
        {
            cout<<"Real and distinct roots";
        }
        else
        {
            cout<<"Imaginary roots";
        }
    }
    return 0;
}