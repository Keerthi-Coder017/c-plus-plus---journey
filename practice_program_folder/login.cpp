#include<iostream>
using namespace std;
int main() {
    string password;
    cout << "Enter the password: ";
    cin>> password;
    if(password == "keerthi123") {
        cout << "Access granted! welcome to the application.";
    } else {
        cout << "Access denied! because of the incorrect pasword check your password and so the correct password other wise the app will not open.";
    }
    return 0;
}
