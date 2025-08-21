#include <iostream>
using namespace std;
class Person { //blueprint for person attributes and methods
    public:
    string name;
    int age;
    string address;
    string phonenumber;
    void displayinfo(){ // method to display person information
        cout << "Name: " << name << ", Age: " << age << ", Address: " << address << ", Phone Number: " << phonenumber << endl;
    }
    void move(string newAddress){ //method to change adress
        address = newAddress;
        cout << "New address: " << address << endl;
    }
    void greet(){ //method to greet
        cout << "Hello, my name is " << name << endl;
    } // displayinfo, name, age, address, and phonenumber bundled in class Person (encapsulation)
}; 

int main(){
    Person person1;
    person1.name = "Grace Howard";
    person1.age = 28;
    person1.address = "123 Elm Street";
    person1.phonenumber = "123-456-7890";
    person1.displayinfo();
    person1.move("456 Guts Street");
    person1.greet();
    return 0;
}
