#include<iostream>
using namespace std;

class mobile{
    private:
    int price;
    string colour;

    public:
    mobile(int a, string b) {
        price = a;
        colour = b;
    }
    mobile(const mobile &brand) {
        price = brand.price;
        colour = brand.colour;
        cout << "Price = " << price << endl;
        cout << "Color = " << colour << endl;
        cout << "----------------------" << endl;
    }
    ~mobile() {
        cout << "Delete" << endl;
    }
};
int main() {
    mobile oppo(10000,"black"); 
    
    mobile vivo[5] = {oppo, oppo, oppo, oppo, oppo};    
}