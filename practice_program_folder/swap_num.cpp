#include<iostream>
using namespace std;
int main()
{
    int a,b,temp=0;
    cout<<" Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<" before swapping the numbers a = "<<a<< " and b=" << b<< endl;
    temp=a;
    a=b;
    b=temp;
    cout<< " after swapping the numbers a = "<<a<<""<< "b = "<<b<< endl;
    return 0;


}