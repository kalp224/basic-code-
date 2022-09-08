#include<iostream>
using namespace std;
int main()
{
    int b,a,d,result;
    cout<<"Enter the salary of Employee"<<endl;
    cin>>b;
    cout<<"Enter the percentage of allowance"<<endl;
    cin>>a;
    cout<<"Enter the percentage of deduction"<<endl;
    cin>>d;
    result=b+((a*b)/100)-((d*b)/100);
    cout<<"The net salary of Employee is"<<result;
    return 0;


}