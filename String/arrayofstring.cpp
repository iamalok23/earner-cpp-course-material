#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    // string arr[] = {"Alok", "Aditya", "Ashish"};
    // cout<<arr[2][2]<<endl; // ye bhi ek type ka 2d arrya hi hai isse ham kuch andaza laga sakte hai 

    vector<string> arr = {"0123","0023","456","00182","940","2901"};
    string max = arr[0];

    for(int i=0; i<arr.size(); i++){
        if(stoi(arr[i]) > stoi(max)){
            max = arr[i];
        }
    }


    cout<<max<<endl;




}