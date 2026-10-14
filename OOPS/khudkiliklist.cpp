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

class MyLinkedList{
    private:
      Node* head;
      Node* tail;
      int length;
    public:

    MyLinkedList(){
        head = tail = NULL;
        length = 0;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void insertAtTail(int val){
        Node* n = new Node(val);
        if(length == 0) head = tail = n;
        else{
            tail->next = n;
            tail = n;
        }
        length++;
        
    }
      void insertAtHead(int val){
        Node* n = new Node(val);
        if(length == 0) head = tail = n;
        else{
            n->next = head;
            head = n;
        }
        length++;
        
    }

    void insert(int idx, int val){
        if(idx<0 or idx>length){
            cout<<"invalid index!"<<endl;
            return;
        }
        if(idx==0){
            insertAtHead(val);
            return;
        }
        if(idx==length){
            insertAtTail(val);
            return;
        }
        Node* n = new Node(val);
        Node* temp = head;
        for(int i=0; i<=idx-1;i++){
            temp = temp->next;
        }
         n->next = temp->next;
         temp->next = n;
         length++;
    }
    int get(int idx){
        if(idx<0 or idx>=length){
            cout<<"invalid index!"<<endl;
            return -1;
        }
        Node* temp = head;
        for(int i=1;i<=idx;i++){
            temp = temp->next;
        }
        return temp->val;
    }

    void removeAtHaed(){
        if(length == 0){
            cout<<"List is empty!"<<endl;
            return;
        }
        head = head->next;
        length--;
    }
    void remove(int idx){
        if(idx<0 or idx>=length){
            cout<<"Invalid index"<<endl;
            return;
        }
        if(idx==0){
            removeAtHaed();
            return;
        }
        Node* temp = head;
        for(int i=1; i<=idx-1; i++){
            temp = temp->next;
        }
        Node* toBeDeleted = temp->next;
        temp->next = temp->next->next;
        delete toBeDeleted;
        length--;
    }
    int size(){
        return length;
    }
};

int main(){
    MyLinkedList list;
    list.insertAtTail(10);
    list.insertAtTail(6);
    list.insertAtHead(29);
    list.display();
    list.removeAtHaed();
    // list.head = NULL;
    list.display();
    cout<<list.size();
    
    
}
