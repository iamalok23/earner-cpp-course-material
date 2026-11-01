#include<iostream>
#include<stack>
using namespace std;
int main(){
    // stack<int> st;
    // st.push(10);
    // st.push(12);
    // st.push(13);
    // st.push(5);
    // st.push(60);
    // cout<<st.top()<<endl;

    stack<int> st;
    st.push(287);
    st.push(27);
    st.pop();
    st.push(867);
    st.push(86);
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
}