#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
    
};
class Mystack{
private:
    Node* head;
    Node*tail;
    int length;
public:
    Mystack(){
        head = tail = NULL;
        length = 0;
    }
    void push(int val){
        Node* n = new Node(val);
        n->next = head;
        head = n;
        length++;
    }
    void pop(){
        if(head == 0){
            cout<<"Stack is empty!"<<endl;
            return;
        }
        Node* toBedeleted = head;
        head = head->next;
        delete toBedeleted;
        length--;
    }
    int get(){
         if(head == 0){
            cout<<"Stack is empty!"<<endl;
            return -1; 
        }
        return head->val;
    }
    int size(){
        return length;
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<endl;
            temp = temp->next;
        }
    }
    
};
int main(){
    Mystack st;
    st.push(10);
    st.display();
}