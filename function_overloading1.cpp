// WAP  write a program using function overloading which will add two numbers (int) , add threee numbers (int) and add 10 numbers (int).

#include <iostream>
using namespace std;
class Addition {
public:
    
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    int add(int ai[]) {
        int sum = 0;
        for (int i = 1; i <= 10; i++) {
            sum += ai[i];
        }
        return sum;
    }
};

int main() {
    Addition b1;
    int a[10];

    cout << "Enter elements :- " << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "element " << i << " = ";
        cin >> a[i];
    }

    cout << "1. Sum of first two elements: " << b1.add(a[1], a[2]) << endl;
    cout << "2. Sum of first three elements: " << b1.add(a[1], a[2], a[3]) << endl;
    cout << "3. Sum of all ten elements: " << b1.add(a) << endl;

    return 0;
}
