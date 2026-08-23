#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n,p,r;
    cout<<"enter the row: ";
    cin>>m;
    cout<<"enter the cols: ";
    cin>>n;

    vector<vector<int>> arr(m,vector<int>(n,0));
    int n = a.size();
    vector<vector<int>> res(n,vector<int>(n,0))
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            for(int k=0; k<n;k++){
                res[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    return ans ;

}