#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &arr){
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    // vector<int> arr = {2,4,5,6,78,9,1};
    // int  n = arr.size();
    // cout<<n;
    // print(arr);

    // //selection sort
    // for(int j=0;j<n-1;j++){
    //     int min = arr[j], minidx = j;
    //     for(int i=j;i<n;i++){
    //         if(arr[i] < min){
    //             min = arr[i];
    //             minidx = i;
    //         }
    //     }
    //     swap(arr[j],arr[minidx]);
    // }
    
    // print(arr);




    vector<int> arr = {3,7,3,1,9,5};
    int n = arr.size();
    print(arr);

    for(int i=0;i<n-1;i++){
        int larg = arr[i], idex = i;
        for(int j=i;j<n;j++){
            if(arr[j] > larg){
                larg = arr[j];
                idex = j;
            }
        }
        swap(arr[i] , arr[idex]);
    }

    print(arr); 
}