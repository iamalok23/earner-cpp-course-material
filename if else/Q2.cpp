#include<iostream>
using namespace std;

// int main(){
//      int num;
//      cout<<"Enter Number: ";
//      cin>>num;
//      if(num%2==0) cout<<"Even Number";
//      else cout<<"Odd Number";
      
// }

// int main(){
//      int num;
//      cout<<"Enter Number: ";
//      cin>>num;
//      if(num%5==0) cout<<"Divisble";
//      else cout<<"Not divisible";
      
// }


int main(){
     float num;
     cout<<"enter a real num: ";
     cin>>num;
     int x = (int)num;
     if(num==x) cout<<"intrger";
     else cout<<"not interger";


      
}

int main()
{
    double m;
    cout<<"Enter mass in kg: ";
    cin>>m;
    
    double v;
    cout<<"Enter velocity in m/s: ";
    cin>>v;
    
    double KE = (double)1/2*m*v*v;
    cout<<KE;

}

int main()
{
  double r;
  cout<<"Enter rupee: ";
  cin>>r;
  
  double d = r/100;
  cout<<"Your rupee in dollar is: "<<d;
  
}
int main()
{
 double m;
 cout<<"Enter marked price: ";
 cin>>m;
 
 double d;
 cout<<"Enter Discount price: ";
 cin>>d;
 
 double t;
 cout<<"Enter tax price: ";
 cin>>t;
 
 double dicount = m-d/100*m;
 double finalp = dicount*(1+t/100);
 
 cout<<finalp;
 
  
}