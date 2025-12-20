#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout << "enter an number: ";
    cin >> n;
    cout << "The multiplication of the number " << n << "is: " << endl;
    for(int i=0; i<=30; i++)
    {
        cout << n << " * " << i << "= " << n*i << endl;
    }
    cout << " the multiplication of the number is displayed above." << endl;
    return 0;
}