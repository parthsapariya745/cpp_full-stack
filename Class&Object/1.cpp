#include <iostream>
using namespace std;

class movie {
private:
    string movieName;
    string heroName;
    int year;
    float budget;
    float collection;

public:
    void set(string movieName , string heroName , int year , float budget , float collection) {
        this->movieName = movieName;
        this->heroName = heroName;
        this->year = year;
        this->budget = budget;
        this->collection = collection;

        cout << "Movie name is " << this->movieName << endl;
        cout << "Movie Hero name is " << this->heroName << endl;
        cout << "Movie release year is " << this->year << endl; 
        cout << "Movie Budget is " << this->budget << endl;
        cout << "Movie collection is " << this->collection << endl;
        cout << "----------------------------------------------------" << endl;
    }
};
int main() {
    movie bollywood,hollywood,sandalwood,tollywood,kollywood;

    bollywood.set("Welcome","Akshay Kumar",2007,32,117.91);
    hollywood.set("Avtar 2","Sam Worthington",2022,46,2.32);
    sandalwood.set("KGF: Chapter 2","Yash",2022,125,1250.55);
    tollywood.set("Pushpa 2","Allu Arjun",2024,400,1738);
    kollywood.set("2.0","Rajnikanth",2018,400,800);
}