#include<iostream>
using namespace std;
int main()
{
    int a,b,c,avg;
    cout<<"enter your mark in three subjects";
    cin>>a>>b>>c;
    avg=(a+b+c)/3;
    if (avg>=60)
    {
        cout<<"your grade is A";
    }
    else 
    {
        if(35<=avg<60)
        {
            cout<<"B grade";
        }
        else
        {
            cout<<"C grade";
        }

    }    


        return 0;
}