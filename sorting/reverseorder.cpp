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

    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1-j;j++){
            if(arr[i] < arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }

    print(arr);

}