#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of the elements need to be printed:\n ";
    cin>>n;
    int size[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the elements: ";
        cin>>size[i];
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+size[i];
    }   
    cout<<"The sum of the elements is: "<<sum;
    return 0;


}