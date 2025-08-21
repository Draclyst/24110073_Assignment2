#include <iostream>
using namespace std;
class Car{  //blueprint for objects, with brand and year attributes
	public:
	string brand;
	int year;
	void displayInfo(){ //abstraction: displays car info, doesnt matter how it is called
		cout<<"Brand: "<<brand<< " , Year:"<<year<<endl;
	}
}; //encapsulation: car bundles brand, year and displayinfo method together

int main(){
	Car car0; //car0 is an object of class Car
	car0.brand = "Lamborghini";
	car0.year = 2018;
	car0.displayInfo();
	return 0;
}