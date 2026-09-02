#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "Alokramu";
    int n = s.size();
   

     int i =0,j=n/2;
     for(int i=0;i<=n;i++){
        if(i<j){
            s[i]=s[j];
            i++;j--;
        }
     }
     cout<<s;

}