#include<iostream>
using namespace std;
int main()
{
    int a[10]={6,8,13,17,20,22,25,28,30,35};
    int l,mid,h,key;
    cout<<"enter a key";
    cin>>key;
    while(l<h)
    {
    mid=(l+h)/2;
    if (key==a[mid])
    {
        cout<<"found at "<<mid;
    }
    else if (key<a[mid]) 
    h=mid-1;
    else l=mid+1;
    }
  

    return 0;
}