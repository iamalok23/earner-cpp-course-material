#include<iostream>
using namespace std;
// class Student{
//     public:
//         string name;
//         int marks;

//         Student(string name , int marks){
//             this->name = name;
//             this->marks = marks;
//         }
// };
// void comapare(Student s1, Student s2){
//     if(s1.marks > s2.marks){
//         cout<<"Alok Ka Marks jayda hai";
//     }
//     else {
//         cout<<"Aditya ka marks jayda hai";
//     }

// }
// class Employee{
//     public:
//         string name;
//         int salary;
//         int age;

//         Employee(string name , int salary, int age){
//             this->name = name;
//             this->salary = salary;
//             this->age = age;
//         }

//         void dispaly(){
//             cout<<name<<" "<<salary<<" "<<age;
//         }
        
// };
class BankAccount{
    public:
        string accountHolder;
        int balance;
        int accountNumber;

        BankAccount(string a , int b, int an){
            this->accountHolder = a;
            this->balance = b;
            this->accountNumber = an;
        }

          void dispaly(){
            cout<<accountHolder<<" "<<balance<<" "<<accountNumber;
        }
};
void checkBalance(BankAccount acc){
    cout<<acc.balance;

}
int main(){
  BankAccount p1("Alok" , 10000 , 12345678);
  BankAccount p2("Anup" , 1000 , 32345678);
  
  checkBalance(p1);
    
}