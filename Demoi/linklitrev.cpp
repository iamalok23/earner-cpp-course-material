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

class linkedlist{
    private:
        Node* head;
        Node* tail;
        int length;

    public:
        linkedlist(){
            head = tail = NULL;
            length = 0;
        }

        void print(){
            Node* temp = head;
            while(temp != NULL){
                cout<<temp->val<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }

        void insertAtTail(int val){
            Node* n = new Node(val);
             if(length ==  0){
                head = tail = n;
             }
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
         void removeHead(){
            if(length == 0){
                cout<<"list is empty"<<endl;
                return;
            }
            head = head->next;
            length--;
         }

};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    linkedlist list;
    list.insertAtTail(10);
    list.insertAtTail(230);
    list.insertAtTail(20);
    list.print();
    list.insertAtHead(30);
    list.print();
    list.removeHead();
    list.print();
   

 


}

