#include<iostream>
#include<string>
using namespace std;
class MyVector{
    public:
        int length; // kitne eleemnt hai vector me 
        int* arr;
        MyVector(int capacity, int default_value){
            arr = new int[capacity];
            for(int i=0;i<capacity;i++){
                arr[i] = default_value;
            }
        }
};
int main(){
    MyVector v(5,-1); 



    // int* arr  = new int[5];
    // arr[0] = 10; arr[1] = 20;

    // int b[] = {67, 21};
    // arr = b;

    // cout<<arr[0]<<endl;
} 