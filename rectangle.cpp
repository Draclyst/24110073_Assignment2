#include <iostream>
using namespace std;
class Rectangle { //blueprint for rectangle with width and height attributes
    public:
    int width;
    int height;
    int calculateArea(){ //abstraction: calculates area of rectangle, implementation details hidden
        return width * height;
    } 
    /* calculateArea method returns the area of the rectangle
        encapsulation: width, height, and calculateArea method bundled in class Rectangle*/
};

int main(){
    Rectangle shape;
    shape.width = 4;
    shape.height = 5;
    cout << "Area:"<< shape.calculateArea() << endl;
}