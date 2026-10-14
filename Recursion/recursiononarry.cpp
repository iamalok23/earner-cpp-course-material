#include<iostream>
#include<vector>
using namespace std;
void printrec(vector<int> &arr , int idx){
    if(idx == arr.size()) return;
    cout<<arr[idx]<<" ";
    printrec(arr,idx+1);
}
int main(){
   vector<int> arr = {1,3,4,5,6,7,8,9,4};
    printrec(arr ,0);
}