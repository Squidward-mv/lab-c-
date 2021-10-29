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

int main(){
    Parallelepiped first {1.2, 3.2, 2.4};
    Parallelepiped second;
    
    first.getVolume(first.length, first.width, first.height);
    first.getMainDiag(first.length, first.width, first.height);
    
    return 0;
}
