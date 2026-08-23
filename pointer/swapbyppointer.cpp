#include<iostream>
using namespace std;
void swap(int* a, int* b){ // yaha recive ho raha hai & iske help se 
    int temp=*a;
    *a = *b; //drefrence ki help usme change hua isko pass by refrence bolte hai
    *b = temp;
}
int main(){
    int a =10;
    int b=20;
    swap(&a,&b); //  yaha se varible ka addresh beja ja raha hai 
    cout<<a<<" "<<b<<endl;
}