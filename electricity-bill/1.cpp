#include<iostream>
using namespace std;

int main(){
    int user,add = 0,sum = 0;
    float sub = 0,total = 0;

    cout << "Enter your unit: ";
    cin >> user;

    cout << "-----------------------------" << endl;

    if (user > 0 && user <= 50)
    {
        add = user * 0.50;
    }
    
    else if(user > 50 && user <= 150){
        add = 25;
        sub = (user - 50) * 0.75;        
    }  

    else if(user > 150 && user <= 300){
        add = 25 + 75; 
        sub = (user - 150) * 1.20;
    }

    else{
        add = 25 + 75 + 180;
        sub = (user - 300) * 1.50;
    }

    sum = sub + add;
    cout << "total amount 0% tax: " << sum << endl;

    cout << "-----------------------------" << endl;

    total = sum + (sum * 0.20);
    cout << "total amount +20% tax: " << total << endl;
}