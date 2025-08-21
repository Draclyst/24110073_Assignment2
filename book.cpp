#include <iostream>
using namespace std;

class Book{ //blueprint for title and author attributes
    public:
    string title;
    string author;
    void displayinfo(){
        cout<<"Title:"<< title << " , Author:" << author << endl;
    } //displayinfo,title and author bundled in class book (encapsulation)
};

int main(){
    Book book0; //object of class Book
    book0.title = "Yellow Flowers on the Green Grass";
    book0.author = "Nguyen Nhat Anh";
    book0.displayinfo();
    return 0;
}