#include <iostream>
using namespace std;
class Student{ //blueprint for objects, name and grade as attributes
public:
    string name;
    float grade;
    void displayinfo(){ //abstraction: displays student info, implementation details hidden
        cout<< "Name: " << name << " , Grade: " <<grade <<endl;
    }
};  //name, grade and displayinfo bundled by class student which represents encapsulation

int main(){
    Student student0; //student0 is object of class Student
    student0.name = "Yogurt";
    student0.grade= 95;
    student0.displayinfo();
    return 0;
}