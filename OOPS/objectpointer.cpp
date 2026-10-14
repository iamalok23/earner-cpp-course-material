#include<iostream>
#include<string>
using namespace std;
class Cricketer{
    public:
        string name;
        int runs;
        float average;
    
    Cricketer(string name, int runs, float average){
        this->name = name;
        this->runs = runs;
        this->average = average;
    }
};
int main(){
   Cricketer c1("Alok Kumar" , 14000, 58.1);
   Cricketer c2("Alok Kumar" , 14000, 58.1);

    Cricketer* p = new Cricketer("Alok" , 23164,45.4);

}