#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float cgpa;
    Student(string n , int r , float c){
        name = n;
        rno = r;
        cgpa = c;
    }
    Student(){
        //default constructor
    }
};
int main(){
    Student x;
    x.name = "Alok";
    x.rno = 59;
    x.cgpa = 8.0;

    Student y;
    y.name = "Aditya";
    y.rno = 59;
    y.cgpa = 8.0;

    Student z;
    z.name = "Ashish";
    z.rno = 59;
    z.cgpa = 8.0;

    cout<<x.name<<" "<<x.rno<<" "<<x.cgpa<<endl;

    
    
}
