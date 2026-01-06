#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter your mark: "<<endl;
    cin >> marks;
    if(marks>=81 && marks<=100) cout<<"A"<<endl;

    else if(marks>=61 && marks<=80)  cout<<"B"<<endl;
    
    else if(marks>=41 && marks<=80)  cout<<"C"<<endl;
    
    else  cout<<"D"<<endl;
    
    return 0;

}