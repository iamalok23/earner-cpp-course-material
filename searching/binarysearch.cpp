#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int arr[] =  {179,124,120,99,84,79,44,22};
    int target = 179;
    int n = sizeof(arr) / sizeof(arr[0]);
    int lo = 0, hi = n-1;
    while(lo <= hi){
        int mid  = (lo+hi)/2;
        if(arr[mid] > target) {
            lo = mid+1;
        }
        else if(arr[mid] < target){
            hi =  mid-1;
        }
        else{
            cout<<mid<<" "<<target<<endl;
            break;
        }   
    }
    cout<<"element not found";
  

}