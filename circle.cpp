#include <iostream>
using namespace std;
class Circle{ //blueprint for circle with radius attribute
    public:
    double radius;  
    double circumference(){
        return radius * 3.14 * 2; //abstraction: calculates circumference, implementation details hidden
    }
    double area(){
        return radius * radius * 3.14;
    }
}; // encapsulation: radius, circumference, and area methods bundled in class Circle

int main(){
    Circle shape;
    shape.radius = 2;
    cout << "circumference: " << shape.circumference() << ", Area: " << shape.area() << endl;
    return 0;
}