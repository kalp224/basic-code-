#include<iostream>
using namespace std;
int main()
{
    int n,avg;
    float sum,num[100];
    cout<<"enter the number of elements";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the number";
        cin>>num[i];
        sum+=num[i];

    }
    avg=sum/n;
    cout<<"average is "<<avg;
    cout<<endl;
    return 0;
}