#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> parth;

    cout << "push_back & size" << endl;

    parth.push_back(10);
    parth.push_back(20);
    parth.push_back(30);
    parth.push_back(40);

    for (int i = 0; i < parth.size(); i++) {
        cout << parth[i] << " ";
    }

    cout << endl << endl << "pop_back & size" << endl;
    
    parth.pop_back();
    
    for (int i = 0; i < parth.size(); i++) {
        cout << parth[i] << " ";
    }

    cout << endl << endl << "insert & size" << endl;

    parth.insert(parth.begin() + 2, 25);

    for (int i = 0; i < parth.size(); i++) {
        cout << parth[i] << " ";
    }

    cout << endl << endl << "erase & size" << endl;

    parth.erase(parth.begin());

    for (int i = 0; i < parth.size(); i++) {
        cout << parth[i] << " ";
    }

    cout << endl << endl << "empty" << endl;
    
    if (parth.empty()) {
        cout << "yes";
    }
    else {
        cout << "no";
    }    
    
    cout << endl << endl << "at & size" << endl;
    
    cout << "index no[1] = " << parth.at(1);

    cout << endl << endl << "front & size" << endl;

    cout << parth.front();

    cout << endl << endl << "back & size" << endl;

    cout << parth.back();

    cout << endl << endl << "begin - end & size" << endl;

    for (auto i = parth.begin(); i != parth.end(); i++) {
        cout << *i << " ";
    }

    cout << endl << endl << "clear & size" << endl;
    
    parth.clear();
    
    for (int i = 0; i < parth.size(); i++) {
        cout << parth[i] << " ";
    }
}