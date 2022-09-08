#include<iostream>
using namespace std;
int main()
{
    int count=0;
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<5;j++)
        {
            count=count+1;
            cout<<count<<" ";

        }
        cout<<endl;

    }

    return 0;
}