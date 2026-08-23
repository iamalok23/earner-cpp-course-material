#include<iostream>
#include<climits>
using namespace std;
int main(){
    // int a[][3] = {{10,13,34}, {46,64,8}, {47,32,7}};
    
    // int maxrow = -1, maxele = INT_MIN;
    // for(int i=0; i<3; i++){

    //       int largest = a[i][0];

    //     for(int j=0; j<3; j++){
    //         if(a[i][j] > largest){
    //             largest = a[i][j];
    //         }
    //     }
    //     if(largest>maxele){
    //         maxele = largest;
    //         maxrow = i;
    //     }
    // }
    // cout<<"maxelemt in row = "<< maxele<<" "<<"index = "<<maxrow;

    int a[][3] = {{10,13,34}, {46,64,8}, {47,32,7}};
    
    int maxcol = -1, maxele = INT_MIN;
    for (int j = 0; j < 3; j++)
    {

        int largest = a[j][0];

        for (int i = 0; i < 3; i++)
        {
            if (a[i][j] > largest)
            {
                largest = a[i][j];
            }
        }
        if (largest < maxele)   
        {
            maxele = largest;
            maxcol = j;
        }
    }
    cout<<"maxelemt in col = "<< maxele<<" "<<"index = "<<maxcol;
}