#include<iostream>
#include<climits>
using namespace std;
int main(){
   // char ch;
   // cout<<"Enter a letter ";
   // cin>>ch;
   //  if(ch>=65 and ch<=90){
   //      cout<<"Capital alphabet";
   //  }
   //  else{
   //      cout<<"Not capital";
   //  }


   // int a,b,c;
   // cout<<"Enter the number ";
   // cin>>a>>b>>c; 
   // if(a<b and a<c) cout<<a<<" is least";
   // else if(b<c and b<a) cout<<b<<" is least";
   // else cout<<c<<" is least";

   // int a,b,c;
   // cout<<"Enter the number ";
   // cin>>a>>b>>c; 
   // if(a>b){
   //    if(a>c) cout<<"a is greater";
   //    else cout<<"c is greater";
   // }
   // else{
   //    if(b>c) cout<<"b is greater";
   //    else cout<<"c is grater ";
   // }

   // int a,b,c;
   // cout<<"Enter the number ";
   // cin>>a>>b>>c; 
   // if(a<b){
   //    if(a<c) cout<<"a is least";
   //    else cout<<"c is lest";
   // }
   // else{
   //    if(b<c) cout<<"b is least";
   //    else cout<<"c is least ";
   // }

   int l;
   cout<<"enter the length";
   cin>>l;
   int b;
   cout<<"enter the breath";
   cin>>b;
   int area = l*b;
   int para = 2*(l+b);
   if(area>para){
      cout<<"area is greater";
   }
   else{
      cout<<"para is greater";
   }
}

