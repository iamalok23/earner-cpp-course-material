#include<iostream>
using namespace std;
int main(){
    int a[][3] = {{10,13,34}, {46,64,8}, {47,32,7}};

    int largest = a[0][0];
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            if(a[i][j] > largest){
                largest = a[i][j];
            }
        }
    }
     
    cout<<largest;

}