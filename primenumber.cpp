#include<iostream>
using namespace std;
int main()
{
    int i,n,count=0;
    cout<<"enter a number";
    cin>>n;
    for ( i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            count+=1;
        }
    }
    if (count==2)
    cout<<"prime number";
    else 
    cout<<"not prime";

    return 0;

}



    
    
    