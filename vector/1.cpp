#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> parth;

    cout << "push_back & size" << endl;

    parth.push_back(10);
    parth.push_back(20);
    parth.push_back(30);
    parth.push_back(40);

    for (int i : parth) cout << i << " ";

    cout << endl << endl << "pop_back & size" << endl;
    
    parth.pop_back();
    
    for (int i : parth) cout << i << " ";

    cout << endl << endl << "insert & size" << endl;

    parth.insert(parth.begin() + 2, 25);

    for (int i : parth) cout << i << " ";

    cout << endl << endl << "erase & size" << endl;

    parth.erase(parth.begin());

    for (int i : parth) cout << i << " ";

    cout << endl << endl << "empty" << endl;
    
    if (parth.empty()) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }    
    
    cout << endl << endl << "at" << endl;
    
    cout << "index no[1] = " << parth.at(1);

    cout << endl << endl << "front" << endl;

    cout << parth.front();

    cout << endl << endl << "back" << endl;

    cout << parth.back();

    cout << endl << endl << "begin - end" << endl;

    for (auto i = parth.begin(); i != parth.end(); i++) {
        cout << *i << " ";
    }

    cout << endl << endl << "clear & size" << endl;
    
    parth.clear();

    cout << "Size of vector: " << parth.size();

    cout << endl << endl << "empty" << endl;
    
    if (parth.empty()) {
        cout << "Yes";            
    }
    else {
        cout << "No";
    }  

    cout << endl << endl << "sort" << endl;

    parth.push_back(50);
    parth.push_back(10);
    parth.push_back(30);
    parth.push_back(20);

    cout << "--> Before sort : ";
    for (int i : parth) cout << i << " ";

    sort(parth.begin(), parth.end());
    
    cout << endl << "--> After sort  : ";
    for (int i : parth) cout << i << " ";

    cout << endl << endl << "resize" << endl;

    parth.resize(6);

    for (int i : parth) cout << i << " ";
}