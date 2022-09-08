#include<iostream>
using namespace std;
int main()
{
    
    int a[3][3],b[3][3],i,j,result[3][3];
    cout<<"enter first matrix elements";
    cout<<endl;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<"enter number in pocket ["<<i<<"]"<<"["<<j<<"]";
            cin>>a[i][j];
            cout<<endl;
        }
    }
    cout<<"first matrix is...";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;

    }
    cout<<"enter second matrix elements";
    cout<<endl;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<"enter number in pocket ["<<i<<"]"<<"["<<j<<"]";
            cin>>b[i][j];
            cout<<endl;
        }
    }
    cout<<"second matrix is...";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<b[i][j];
        }
        cout<<endl;

    }
    return 0;
}