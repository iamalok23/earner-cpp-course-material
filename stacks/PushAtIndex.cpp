#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& st ,int idx , int val ){
    stack<int> helper;
    while (st.size() != idx){
        helper.push(st.top());
        st.pop();
    } 
    st.push(val);
    while(helper.size() > 0 ){
        st.push(helper.top());
        helper.pop();
    }
    cout<<endl;

}
void pop(stack<int>& st ,int idx ){
    stack<int> helper;
    while (st.size() != idx){
        helper.push(st.top());
        st.pop();
    } 
    st.pop();
    while(helper.size() > 0 ){
        st.push(helper.top());
        helper.pop();
    }
    cout<<endl;

}
void get(stack<int>& st ,int idx){
    stack<int> helper;
    while (st.size() != idx){
        helper.push(st.top());
        st.pop();
    } 
    cout<<st.top();
    while(helper.size() > 0 ){
        st.push(helper.top());
        helper.pop();
    }
    cout<<endl;

}
void printTopToBottom(stack<int>& st ){
    stack<int> helper;
    while (st.size() > 0 ){
        cout << st.top() << " ";
        helper.push(st.top());
        st.pop();
    }
    while (helper.size() > 0 ){
        st.push(helper.top());
        helper.pop();
    }
    cout<<endl;

}
int main(){
    stack<int> st;
    st.push(287);
    st.push(27);
    st.push(867);
    st.push(86);

    printTopToBottom(st);
    push(st,2,60);
    printTopToBottom(st);
    pop(st,3);
    printTopToBottom(st);
    get(st,2);
     
    
    
}