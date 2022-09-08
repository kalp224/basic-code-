#include<iostream>
using namespace std;
int main()
{
    int A[5]={1,2,3,8,4};
    int max=A[0];
    for(int i=0;i<5;i++)
    {
        if (max<A[i])
        {
            max=A[i];
        }


    }
    cout<<max;

    return 0;
}