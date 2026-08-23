#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the Size of array: ";
   cin>>n;
   int arr[n];
   int search;
   
   cout<<"Enter array element: ";
   for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"enter the number to search: ";
    cin>>search;
    bool flag = false; // means not present
    for(int i=0;i<=n-1;i++){
      if(arr[i] == search){
            // cout<<arr[i]<<" "<<"Element found";
            flag = true; // elemnt mil gaya
            break;
       }
    }
    if(flag == true){
        cout<<"Element is found";
    }
    else{
        cout<<"Element is not found";
    }
    

}