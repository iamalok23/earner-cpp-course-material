#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v; //ye bhi ek array hai empty array hai 
    vector<int> arr(5,10); // index 0 to 4
    cout<<arr.size()<<endl;
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

    arr.push_back(5);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}
