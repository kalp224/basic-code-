#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number";
    cin>>n;
    while (i<=10)
    {
        cout<<n<<"X"<<i<<"="<<n*i<<endl;
        i++;
    }
    return 0;
}