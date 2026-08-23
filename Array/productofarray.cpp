#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the Size of array: ";
   cin>>n;
   int arr[n];
   int pro = 1;
   cout<<"Enter array element: ";
   for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
       pro *= arr[i];
    }
    cout<<pro;


}