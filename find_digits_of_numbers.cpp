#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"entere a number";
    cin>>n;
    while(n>0)
    {
        i=n%10;
        n=n/10;
        cout<<i<<endl;
    }
    return 0;
}