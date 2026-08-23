#include<iostream>
#include <cmath>
using namespace std;
// void printdetails(int a , int b=10, int c=30){
//     cout<<a << "_" << b << "_" << c << endl;
// }
// int main(){
//     printdetails(5);
//     printdetails(5,15);
// }

// void modifyRef ( int & x) {
//  x = x + 10;
//  }
//  int main () {
//  int a = 5;
//  modifyRef ( a);
//  cout << a ;
//  }
// int main(){
//     int score  =40;
//     int* ptr = &score;
//     *ptr = 99;
//     cout<<score;
// }

// int main(){
//     int x =19 , y = 28;
//     cout<< max((int)sqrt(x) , y); 
// }

// int main(){
//     int a = 8;
//     int *p1 = &a;
//     int **p2 = &p1;
//     cout << **p2;
// }

// int num = 100;
// void compute(int num)
// {
//     num = num + ::num;
//     cout << num << " ";
// }
// int main()
// {
//     compute(20);
//     cout << num;
// }

// int main () {
//  int x = 10 , y = 20;
//  int *p = & x;
//  p = &y;
//  *p = 50;
//  cout << x << " " << y;
//  }

// int globalVar = 10;
// void mysteryFunction(int *ptr, int &ref)
// {
//     *ptr = ref + globalVar;
//     ref = *ptr - 5;
//     globalVar++;
// }
// int main()
// {
//     int a = 20, b = 30;
//     mysteryFunction(&a, b);
//     cout << a << " " << b << " " << globalVar;
// }


 int & trickyUpdate (int &x , int y ) {
 x = x + y;
 return x ;
 }
 int main () {
 int val = 5;
 trickyUpdate ( val , 3) = 25;
 cout << val ;
 }