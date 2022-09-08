#include<iostream>
using namespace std;
int main()
{
    int m,n,i,rev=0;
    cout<<"enter a number";
    cin>>n;
    m=n;

    

 while (n>0)
 {
    i=n%10;
    n=n/10;
    rev=rev*10+i;

 }
 if (m==rev)
 cout<<"its a palindrome";

 else
 cout<<"not palindrome";
    
    return 0;
}