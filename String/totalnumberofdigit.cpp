#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    string s = to_string(abs(n));

    int num = s.length();
    cout<<num<<endl;

}