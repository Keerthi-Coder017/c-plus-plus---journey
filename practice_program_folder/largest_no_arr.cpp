#include<iostream>
using namespace std;
int main(){
    int arr[6];
    for(int i=0; i<6;i++){
        cin>>arr[i];
    }
int large=arr[0];
for(int i=1; i<6; i++){
    if(arr[i] > large){
        large = arr[i];
    }
}
cout<<"Largest number is: "<<large;
return 0;

}
