#include<iostream>
using namespace std;
int main() {
    string password;
    cout << "Enter the password: ";
    cin>> password;
    if(password == "keerthi123") {
        cout << "Access granted! welcome to the application.";
    } else {
        cout << "Access denied! because of the incorrect password check your password and write the correct password otherwise the app will not open.";
    }
    return 0;
}
