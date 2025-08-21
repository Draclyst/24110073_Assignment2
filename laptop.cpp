#include <iostream>
using namespace std;
class Laptop{
    public:
    string brand;
    string model;
    float ram;
    float storage;
    string gpu;
    void displayinfo(){ //display method
    cout<< "Brand: " << brand << ", Model: " << model << ", RAM: " << ram << "GB, Storage: " << storage  << "GB, GPU: " << gpu << endl;
    } // displayinfo, brand, model, ram, storage, and gpu bundled in class Laptop (encapsulation)
    void checkRam(float requiredRam){ //method that checks if the RAM is sufficient for running an application
        if (ram >= requiredRam){
            cout <<"Sufficient Ram"<<endl;
        } else {
            cout <<"Insufficient Ram to run this application"<<endl;
        }
    }
    void upgradeRam(float increaseRam){ //method that checks if the RAM can be upgraded and increases it
        ram += increaseRam;
        cout << "Ram upgraded! New RAM: " << ram << "GB" << endl;
    }
    void checkGPU(string requiredgpu){ //method that checks if the GPU is sufficient for running a game
        if (gpu == requiredgpu){
            cout <<"Sufficient GPU"<<endl;
        } else {
            cout <<"Insufficient GPU to run this game"<<endl;
        }
    }
};

int main(){
    Laptop laptop1;
    laptop1.brand = "Acer";
    laptop1.model = "Nitro 5";
    laptop1.ram = 16;
    laptop1.storage = 512;
    laptop1.gpu = "NVIDIA GeForce GTX 3050";
    laptop1.displayinfo();
    laptop1.checkRam(32);
    laptop1.upgradeRam(16);
    laptop1.checkRam(32);
    laptop1.checkGPU("NVIDIA GeForce GTX 3050");
    laptop1.checkGPU("NVIDIA GeForce RTX 3060");
    return 0;
}