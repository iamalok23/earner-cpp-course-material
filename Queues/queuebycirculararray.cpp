#include<iostream>
#include<vector>
using namespace std;
class Queue{
private: 
    int length;
    int f;
    int r;
    vector<int> arr;
public:
    Queue(int capacity){
        f = 0;
        r = 0;
        length = 0;
        arr.resize(capacity,0);
    }
    void push(int val){
        if(length == arr.size()){
            cout<<"Queue is Full!"<<endl;
            return;
        }
        if(r == arr.size()) r = 0;
        arr[r++] = val;
        length++;
    }
    void pop(){
        if(length == 0){
            cout<<"Queue is empty"<<endl;
            return;
        }
        if(f == arr.size()) f = 0;
        f++;
        length--;
    }
    int front(){
        if(length == 0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[f];
    }
    int size(){
        return length;
    }
    int capacity(){
        return arr.size();
    }
    void dispaly(){
        if(length == 0) return;
        if(r <= f){
            for (int i=f; i<arr.size();i++){
                cout<<arr[i]<<" ";
            }
            for(int i=0;i<r;i++){
                cout<<arr[i]<<" ";
            }
        }
        else{
            for(int i=f; i<r; i++){
                cout<<arr[i]<<" "; 
            }
        }
        cout<<endl;
    }
};
int main(){
    Queue q(5);
    q.push(25);
    q.push(35);
    q.push(45);
    q.push(55);
    q.push(675);
    q.dispaly();
}