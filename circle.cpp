#include <iostream>
using namespace std;
class Circle{ //blueprint for circle with radius attribute
    public:
    double radius;
    string color;
    void displayinfo(){ // method to display circle information
        cout << "Radius: " << radius << ", Color: " << color << endl;
    }
    double circumference(){
        return radius * 3.14 * 2; //abstraction: calculates circumference, implementation details hidden
    }
    double area(){
        return radius * radius * 3.14;
    }
    bool validRadius(){
        return radius >0;
    }
}; // encapsulation: radius, circumference, and area, color and methods bundled in class Circle

int main(){
    Circle shape;
    shape.radius = 2;
    shape.color = "Cyan";
    shape.displayinfo();
    if(!shape.validRadius()){
        cout<<"Invalid radius"<<endl;
    } else{
    cout << "circumference: " << shape.circumference() << ", Area: " << shape.area() << endl;
    }
    return 0;
}