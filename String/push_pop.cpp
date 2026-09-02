#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   string s = "Kumar";
//    s.push_back('K');//double coits me push nahi kar sakte
//    cout<<s<<endl;

// sort(s.begin(),s.end());
   reverse(s.begin()+1,s.end()-1);


   cout<<s<<endl;


}
