#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[][4] = { {1,2,3,4}, {3,4,5,6}, {3,6,3,87} };
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // cout<<"Transpose of array"<<endl;


    // for(int j=0; j<4; j++){
    //     for(int i=0; i<3; i++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int maxrow = -1 , maxsum = INT32_MIN; 

    for(int i=0; i<3; i++ ){
        int sum=0;//scope of variable
        for(int j=0; j<4; j++){
            sum = sum + arr[i][j];
        }
        if(sum > maxsum){
            maxsum = sum;
            maxrow = i;
        }
    }
    cout<< maxrow<<" "<<maxsum;

}