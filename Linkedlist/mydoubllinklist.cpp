#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val = val;
        next = prev = NULL;
    }
};
class myDoublyLL{ 
    private:
        Node* head;
        Node* tail;
        int length;
    public:
        myDoublyLL() {
           head = tail = NULL;
           length = 0;
        }
        void insertATTail(int val){
            Node* n = new Node(val);
            if(length == 0) head = tail = n;
            else{
                tail->next = n;
                n->prev = tail;
                tail = n;
            }
            length++;
        }

        void insertATHead(int val){
            Node* n = new Node(val);
            if(length == 0) head = tail = n;
            else{
                n->next = head;
                head->prev = n;
                head = n;
            }
            length++;
        }

        void insert(int idx, int val){
            Node* n = new Node(val);
            if(length == 0) head = tail = n;
            else{
               
            }
            length++;
        }
        void removeATHead(int val){
            if(length == 0){
                cout<<"list is empty"<<endl;
                return;
            }
            else{
                head = head->next;
                head->prev = NULL; 
            }
            length--;
        }
        void remove(int idx){
           
            length--;
        }
        void removeATTail(int val){
            if(length == 0){
                cout<<"list is empty"<<endl;
                return;
            }
            else{
                tail = tail->prev;
                tail->next = NULL;
            }
            length--;
        }
        void display(){
            Node* temp = head;
            while(temp){
                cout<<temp->val<<" ";
                temp= temp->next;
            }
            cout<<endl;
        }
        void displayReverse(){
            Node* temp = tail;
            while(temp){
                cout<<temp->val<<" ";
                temp= temp->prev;
            }
            cout<<endl;
        }
        int size(){
            return length;
        }   
    
};
int main(){
    myDoublyLL list;
    list.insertATTail(10);
}