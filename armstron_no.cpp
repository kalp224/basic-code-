#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0,m;
    cout<<"enter a number";
    cin>>n;
    m=n;
    while (n>0)
    {
    i=n%10;
    n=n/10;
    sum=sum+i*i*i;
    }
    if (sum==m)
    {
        cout<<"Armstrong Number";
    }
    else
    {
        cout<<"not armstrong";
    }
    

    return 0;
}