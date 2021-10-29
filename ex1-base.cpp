#include <iostream>

using namespace std;

class MathClass {
public: 

    float a;
    float b;
    
public:

    MathClass(){
        a = 0;
        b = 0;
    }
    
    void showInfo(float a, float b){
        cout << "a = " << a << "\n" << "b = " << b << endl;
    }
    
    void sumSquare(float a, float b){
        cout << a*a + b*b << "\n";
    }    
};

int main()
{
    MathClass first;
    first.a = 3.4;
    
    MathClass second;
    
    first.sumSquare(first.a, first.b);
    first.showInfo(first.a, first.b);

    second.showInfo(second.a, second.b);
    
    return 0;
}
