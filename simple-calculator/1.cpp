#include <iostream>
using namespace std;

int main() {
    int user;
    char grade;

    cout << "Enter your score: ";
    cin >> user;

    if (user > 100) {
        cout << "Invalid score." << endl;
    }

    grade = (user >= 85) ? 'A' : (user >= 70) ? 'B' : (user >= 60) ? 'C' : (user >= 45) ? 'D' : (user >= 33) ? 'E' : 'F';

    cout << "Your grade is: " << grade << endl;

    switch (grade) {
    case 'A':
        cout << "Excellent work!";
        break;
    case 'B':
        cout << "Well done.";
        break;
    case 'C':
        cout << "Good job.";
        break;
    case 'D':
    case 'E':
        cout << "You passed, but you could do better.";
        break;
    case 'F':
        cout << "Sorry, you failed.";
        break; 
    default:
        cout << "INVALID SCORE";
        break;
    }

    if (grade == 'F') {
        cout << "Please try again next time";
    } 
    else 
    {
        cout << " You are eligible for the next level";
    }
}