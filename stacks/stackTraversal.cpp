#include<iostream>
#include<stack>
using namespace std;
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
void printBottomToTop(stack<int>& st ){
    stack<int> helper;
    while (st.size() > 0 ){
        helper.push(st.top());
        st.pop();
    }
    while (helper.size() > 0 ){
        cout << helper.top() << " ";
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
    
    // cout<<st.top()<<endl;
    // cout<<st.size()<<endl;

    printTopToBottom(st);
    printBottomToTop(st);
}