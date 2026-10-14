#include<iostream>
using namespace std;
class Complex{
    public:
        float real;
        float imaginary;
        Complex(int real, int imaginary){
            this->real = real;
            this->imaginary = imaginary;
        }

};
int main(){
     Complex c1(3,4);
}