#include <iostream>
using namespace std;

class SpyNumber {
public:
    int num;

    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void check() {
        int temp = num;
        int sum = 0;
        int product = 1;
        int lastDigit;

        
        while (temp > 0) {
            lastDigit = temp % 10; 
            sum += lastDigit;      
            product *= lastDigit; 
            temp /= 10;            
        }

        if (sum == product) {
            cout << num << " is a Spy Number!" << endl;
        } else {
            cout << num << " is NOT a Spy Number." << endl;
            cout << "(Sum: " << sum << "\t" << " Product: " << product << ")" << endl;
        }
    }
};

int main() {
    SpyNumber s;
    s.input();
    s.check();
    return 0;
}
