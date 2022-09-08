#include<iostream>
using namespace std;
int main()
{
    int key,i;
    int a[10]={2,88,4,5,6,7,8,9,10,11};
    cout<<"enter the key";
    cin>>key;

    for(i=0;i<10;i++)
    {
        if (key==a[i])
        {
        cout<<"it is at "<<i;
        return 0;
        }
        
    }
    cout<<"not founn";
    return 0;
}