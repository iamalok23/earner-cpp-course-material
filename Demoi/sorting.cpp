#include<iostream>
using namespace std;

 void bubblesort(int arr[] , int n){

    for(int i=0;i<n-1;i++){
        bool isswap =false;//
        for(int j=0;j<n-1-i;j++){
            if(arr[j] > arr[j+1]){
                isswap = true;
            }
        } 
        if(!isswap){
            return;
        } 
    }
 }

void selectionsort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int smallest = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[smallest]){
                smallest = j;
            }
        }
        swap(arr[i] , arr[smallest]);
    }
}

void insertionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}

int main(){
    int arr[] = {2,6,7,4,9,1,0};
    int n = 7;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    insertionSort(arr,n);

    cout<<"sorted array"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}