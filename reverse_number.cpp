#include<iostream>
using namespace std;
int main()
{
    int i,n,rev=0,m;
    cout<<"entere a number";
    cin>>n;
    m=n;
    while(n>0)
    {
        i=n%10;
        n=n/10;
        rev=rev*10+i;
        
    }
    cout<<rev<<endl;
    return 0;
}