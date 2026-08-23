#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void change(vector<int> v){ //pass by value gar ham & laga de to pass by refrence hote hai
    v[2] = 99;
}
int main(){
    vector<int> v ={4,5,56,6};
    change(v);
    cout<<v[2]<<endl;
    
}