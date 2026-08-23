#include<iostream>
#include<cmath>
using namespace std;
int main(){

//WAP to print all the factors of a given number

    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // for(int i=1;i<=sqrt(n);i++){
    //     if(n%i == 0){ //factor mil gaya
    //         cout<<i<<" ";
    //         if(i != n/i) cout<<n/i<<" ";
    //     }
    // }

    // WAP to find number is prime or not 

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) count++;
    }
    if(count==1) cout<<"Neither Prime nor Composite";
    else if(count==2) cout<<n<<" Is Prime number";
    else cout<<n<<" is Compoiste";

}