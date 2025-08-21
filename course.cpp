#include <iostream>
using namespace std;
class Course{ //blueprint for course attributes and methods
    public:
    string courseName; // attributes of the course
    string courseCode;
    string instructor;
    int credits;
    void displayinfo(){ // method to display course information
        cout<< "Course name: " << courseName << ", Course code: " << courseCode << ", Credits: " <<credits << ", Instructor: "<<instructor<< endl;
    }
    bool isHighCredits(){ // method to check if the course has high credits
        return credits > 3;
    }
    bool isLabRequired(){   // method to check if the course requires a lab
        return credits >4;
    }
};
int main(){
    Course course1; // object of class Course
    course1.courseName = "OOP";
    course1.courseCode = "CS202";
    course1.instructor = "Mr.A";
    course1.credits = 5;
    course1.displayinfo();
    if (course1.isHighCredits()){
        cout<< "This is a high credit course." << endl;
    } else {
        cout << "This isn't a high credit course." <<endl;
    }
    if (course1.isLabRequired()){
        cout<<"This course requires a lab."<<endl;
    } else {
        cout<<"This course does not require a lab."<<endl;
    }
    return 0;
}