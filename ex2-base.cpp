#include <iostream>

using namespace std;

class MathClass {
public: 

    float a, b;
    
public:

    MathClass(){
        a = 0;
        b = 0;
    }
    
    void showInfo(float a, float b){
        cout << "\na = " << a << "\n" << "b = " << b << endl;
    }
    
    void sumSquare(float a, float b){
        cout << a*a + b*b << "\n";
    }    
};

class childOfMathClass : public MathClass {
public:

    float c;
    
public:

    childOfMathClass() : MathClass()  {
        c = 0;
    }
    
    void showInfo(float a, float b, float c){
        cout << "\na = " << a << "\nb = " << b << "\nc = " << c << endl;
    }
    
    void getRootOfTheEquation(float a, float b, float c){
        cout << "\nx = " << (c-b)/a << endl;
    }
};

int main(){
    childOfMathClass firstChild;
    
    firstChild.a = 2.4;
    firstChild.b = 3;
    firstChild.c = 9;
    
    firstChild.showInfo(firstChild.a, firstChild.b, firstChild.c);
    firstChild.getRootOfTheEquation(firstChild.a, firstChild.b, firstChild.c);
    
    return 0;
}