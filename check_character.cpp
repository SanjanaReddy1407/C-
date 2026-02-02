#include <iostream>
using namespace std;

class Check {
public:
    char ch;

    void input() {
        cout << "Enter a character: ";
        cin >> ch;   
    }

    void checktype() {
        if (ch >= 'A' && ch <= 'Z') {
            cout << ch << " is an Uppercase letter." << endl;
        }
        else if (ch >= 'a' && ch <= 'z') {
            cout << ch << " is a Lowercase letter." << endl;
        }
        else if (ch >= '0' && ch <= '9') {
            cout << ch << " is a digit." << endl;
        }
        else {
            cout << ch << " is a special character." << endl;
        }
    }
};

int main() {
    Check c;
    c.input();
    c.checktype();
    
    return 0;
}
