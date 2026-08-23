#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v(7);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(8);
    cout<<v.size()<<" "<<v.capacity()<<endl; //answe yaha badal jayga by default value vlaue 0 hoti hai jo 7 diya hia isme ye uska size hai aagr ham naya value insert kara rahe hai to oo phir double ho jayga 
}