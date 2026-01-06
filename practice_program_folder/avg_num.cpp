#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int a, b, c, d, e;
    cout << "Enter the 5 numbers: ";
    cin >> a >> b >> c >> d >> e;
    int sum = a+b+c+d+e;
    float avg = sum/5;
    cout << fixed << setprecision(5) << avg << endl;
    cout << "Average of the 5 numbers is: " << avg << endl;
    return 0;
    
}