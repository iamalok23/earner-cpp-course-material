#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &arr ){
    for(int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {5,7,8,3,9,4,0};
    int n =  arr.size();

    print(arr);

    for(int j=n-1;j>=0;j--){
        for(int i=n-1;i>0;i--){
            if(arr[i] < arr[i-1]){
                swap(arr[i],arr[i-1]);
            }
        }
    }

    print(arr);
}