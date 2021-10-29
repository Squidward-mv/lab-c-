#include <iostream>
#include <cmath>

using namespace std;

class Parallelepiped {
public:

    float length, width, height;
    
public:
    
    Parallelepiped(){
        length = 0;
        width = 0;
        height = 0;
        
        showInfo();
    }
    
    Parallelepiped(float altLength, float altWidth, float altHeight){
        length = altLength;
        width = altWidth;
        height = altHeight;
    
        showInfo();
    }
    
    void showInfo(){
        cout << "length = " << length << "\nwidth = " << width << "\nheight = " << height << endl;
    }
    
    void getVolume(float l, float w, float h){
        cout << "\nvolume = " << l*w*h << "\n";
    }
    
    void getMainDiag(float l, float w, float h){
        cout << "\nthe main diagonal = " << sqrt(l*l+w*w+h*h) << endl;
    }
    
    ~Parallelepiped(){
        cout << "Deleting the class was successful \n" << endl;
    }
};

class Bar : public Parallelepiped {
public:
    
    float specifiGravity;

public:

    Bar() : Parallelepiped() {
        specifiGravity = 0;
        
        showInfo();
    }
    
    void showInfo(){
        cout << "length = " << length << "\nwidth = " << width << "\nheight = " << height << "\nspecific gravity = " <<specifiGravity << endl;
    }
    
    void getWeight(float l, float w, float h, float s){
        cout << "\nweight = " << l*w*h*s << endl;
    }
};

int main(){
    
    Bar first;
    
    first.length = 2.3;
    first.width = 3.4;
    first.height = 6.7;
    first.specifiGravity = 1.1;
    
    first.showInfo();
    
    first.getWeight(first.length, first.width, first.height, first.specifiGravity);
    
    return 0;
}