#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m ,n;
   cout<<"Enter the row: ";
   cin>>m;
   cout<<"Enter the cols: ";
   cin>>n;

   vector<vector<int>> arr(m,vector<int>(n,0)); // aise initilize karte hai 

   for(int i=0;i<m;i++){
    for(int j=0; j<n; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }


}