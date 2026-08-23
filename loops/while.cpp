#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int main(){

    // int count=0 , n;
    // cin>>n;
    // while(n>0){
    //     n/=10;
    //     count++;
    // }
    // cout<<count;

    //sum of digit 

    // int n,rem,sum=0;
    // cin>>n;
    // while(n != 0){
    //     rem =n%10;
    //     sum=sum+rem;
    //     n/=10;
    // }
    // cout<<sum;

    // reverse a digit

    // int n,rem,rev=0;
    // cin>>n;
    // while(n != 0){
    //     rem =n%10;
    //     rev=rev*10+rem;
    //     n/=10;
     
    // }
    // cout<<rev<<endl;


    //factorial
     
    int n,fact=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact<<endl;





    
}