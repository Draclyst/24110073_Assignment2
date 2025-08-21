#include <iostream>
using namespace std;
class Employee{ //blueprint for name,salary attributes
    public:
    string name;
    int salary;
    void displayinfo(){ //abstraction: displays employee info, implementation details hidden
        cout<< "Employee name: " << name << " , salary: " <<salary <<endl;
    } //displayinfo method encapsulates name and salary attributes
};

int main(){
    Employee employment; //employment is an object of class Employee
    employment.name = "Jane Doe";
    employment.salary = 13579;
    employment.displayinfo();
    return 0;
}