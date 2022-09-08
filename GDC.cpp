#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter 2 numbers";
    cin>>n>>m;
    while (m!=n)
    {
        if (m>n)
        m=m-n;

        else if (n>m)
        n=n-m;
    }
    cout<<m;
    return 0;
}