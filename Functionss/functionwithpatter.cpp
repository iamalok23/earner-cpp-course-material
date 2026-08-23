#include<iostream>
using namespace std;
void starTringle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter a: ";
    cin>>a;
    starTringle(a);
    int b;
    cout<<"Enter b: ";
    cin>>b; 
    starTringle(b);
    int c;
     cout<<"Enter c: ";
    cin>>c;
    starTringle(c);
}