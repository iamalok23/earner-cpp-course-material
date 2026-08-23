#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int> &arr){
    for(int arr : arr) cout<<arr<<" ";
    cout<<endl;
}

int main(){
    vector <int> arr = {10,20,30,40,50,60,70,80};
    print(arr);
    int i=0,j= arr.size() - 1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    print(arr);
}