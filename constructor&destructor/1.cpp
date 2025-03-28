#include<iostream>
using namespace std;

class city {
    public:
    city(string name, int area, int population, string food) {
        cout << "--> City Name: " << name << endl;
        cout << "--> Area: " << area << " sq km" << endl;
        cout << "--> Population: " << population << " lakh" << endl;
        cout << "--> Famous food: " << food << endl;
        cout << "--------------------------------------------" << endl;
    }
    ~city() {
        cout << "deleted" << endl;
    }
};
int main() {
    city rajkot("Rajkot",170,20,"Gathiya");
    city ahmedabad("Ahmedabad",464,81,"Khaman");
    city surat("Surat",327,70,"Locho");
    city vadodara("Vadodara",420,21,"Sev Usal");
    city morbi("Morbi",51,2,"Thepla");
}