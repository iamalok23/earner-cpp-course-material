#include<iostream>
using namespace std;
int main(){
    int arr[] = {-17, 82,24,57};
    int n = sizeof(arr)/4;
    cout<<&arr[0]<<endl; // addresh of array
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
}