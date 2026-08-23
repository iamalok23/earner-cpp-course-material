#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the Size of array: ";
   cin>>n;
   int arr[n];
   
   cout<<"Enter array element: ";
   for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int larger = 0;
    for(int i=0;i<=n-1;i++){
       if(arr[i] > larger){
         larger = arr[i]; //larger me store karna hai  pahke mera galat ho raha tha 
       }
    }
    cout<<larger;
    
    //agar minus me number ho to usme thora glat hota hai uske liye ham jaha 0 iniilize  kiye hai waha per int_min ka use karenge
}