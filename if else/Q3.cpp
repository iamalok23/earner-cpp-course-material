#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter Cost Price: ";
    cin>>cp;
    int sp;
    cout<<"Enter Selling Price: ";
    cin>>sp;
    int pt = sp-cp;
    if (sp>cp) cout<<pt<<"make profit";
    else cout<<"lose";
    


}