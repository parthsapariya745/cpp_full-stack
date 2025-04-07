#include<iostream>
using namespace std;

class website {
    public:
    virtual void navbar() = 0;
    virtual void hero() = 0;
    virtual void about() = 0;
    virtual void service() = 0;
    virtual void project() = 0;
    virtual void contact() = 0;
    virtual void footer() = 0;
};
class sections {
    public:
    void navbar() {
        cout << "##################" << endl;
        cout << "#     NAVBAR     #" << endl;
        cout << "##################" << endl << endl;
    }
    void hero() {
        cout << "##################" << endl;
        cout << "#  HERO SECTION  #" << endl;
        cout << "##################" << endl << endl;
    }
    void about() {
        cout << "##################" << endl;
        cout << "#      ABOUT     #" << endl;
        cout << "##################" << endl << endl;
    }
    void service() {
        cout << "##################" << endl;
        cout << "#     SERVICE    #" << endl;
        cout << "##################" << endl << endl;
    }
    void project() {
        cout << "##################" << endl;
        cout << "#     PROJECT    #" << endl;
        cout << "##################" << endl << endl;
    }
    void contact() {
        cout << "##################" << endl;
        cout << "#     CONTACT    #" << endl;
        cout << "##################" << endl << endl;
    }
    void footer() {
        cout << "##################" << endl;
        cout << "#     FOOTER     #" << endl;
        cout << "##################" << endl << endl;
    }
};
int main()
{
    sections obj;
    obj.navbar();
    obj.hero();
    obj.about();
    obj.service();
    obj.project();
    obj.contact();
    obj.footer();
}