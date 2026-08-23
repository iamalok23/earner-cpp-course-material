#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[][3] = {{10,13,34}, {46,64,8}, {47,32,7}};

    // int maxrow = -1, maxsum = INT_MIN;
    // for(int i=0; i<3; i++){
    //     int sum = 0;
    //     for(int j=0; j<3; j++){
    //         sum  = sum + a[i][j];
    //     }
    //     if(sum>maxsum){
    //         maxsum = sum;
    //         maxrow = i;
    //     }
    // }
    // cout<<"maximum sum = "<< maxsum<<" "<<"index = "<<maxrow;

    int maxrow = -1, maxsum = INT_MAX;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum  = sum + a[i][j];
        }
        if(sum<maxsum){
            maxsum = sum;
            maxrow = i;
        }
    }
    cout<<"minimum sum = "<< maxsum<<" "<<"index = "<<maxrow;
}