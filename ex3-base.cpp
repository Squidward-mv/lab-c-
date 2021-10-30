#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const int currentYear = 2021;

class House{
public:

    int houseNum, apartmentNum, yearOfConstruction;
    
public:

    House(){
        houseNum = 1;
        apartmentNum = 20;
        yearOfConstruction = 2000;
    }
    
    void showInfo(){
        cout << "\nHouse number - " << houseNum << "\nApartment number - " << apartmentNum << "\nYear of construction - " << yearOfConstruction << endl;
    }
    
    void q(){
        cout << "Q = " << apartmentNum + 2 * (currentYear - yearOfConstruction) << endl;
    }
};

class NewHouse :public House {
public:

    string district;
    
public: 

    NewHouse() : House(){
        district = "central";
    }
    
    void showInfo(){
        cout << "\nHouse number - " << houseNum << "\nApartment number - " << apartmentNum << "\nYear of construction - " << yearOfConstruction << "\nDistrict - " << district <<endl;
    }

    void q() {
        if (district == "central"){
            cout << 2 * (apartmentNum + 2 * (currentYear - yearOfConstruction)) << endl;
        }
        else {
            cout << "Q = " << 0.9 * (apartmentNum + 2 * (currentYear - yearOfConstruction)) << endl;
        }
    }
};

int main(){
    
    House hrushevka;
    
    hrushevka.showInfo();
    hrushevka.q();
    
    NewHouse stalinka;
    
    stalinka.showInfo();
    stalinka.q();
    
    stalinka.district = "Hamovniki";
    
    stalinka.showInfo();
    stalinka.q();
    
    return 0;
}