#include<iostream>
#include<queue>
using namespace std;
void print(queue<int>& q){
    int n = q.size();
    while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop(); 
    }
}

void push(int idx, int ele, queue<int>& q){
    int n = q.size();
    for(int i=1; i<=idx; i++){
        q.push(q.front());
        q.pop();
    }
    q.push(ele);
    for(int i=1; i<=n-idx; i++){
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}

void pop(int idx, queue<int>& q){
    int n = q.size();
    for(int i=1; i<=idx; i++){
        q.push(q.front());
        q.pop();
    }
    q.pop();
    for(int i=1; i<=n-idx; i++){
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}

void get(int idx, queue<int>& q){
    int n = q.size();
    for(int i=1; i<=idx; i++){
        q.push(q.front());
        q.pop();
    }
    cout<<q.front()<<endl;
    for(int i=1; i<=n-idx; i++){
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}

int main(){
    queue<int> q;

    q.push(40);
    q.push(60);
    q.push(10);
    q.push(27);
    q.push(97);
    print(q);
    push(2,4 ,q);
    print(q);
    pop(4,q); 
    get(4,q);
}