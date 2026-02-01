// A shop offers a discount based on total purchase amount: [ < ₹1000 → No discount, ₹1000–₹4999 → 5%, ₹5000–₹9999 → 10%, ≥ ₹10000 → 15%] .Compute the final bill and discount applied

#include <iostream>
using namespace std;

class Purchase {
private:
    double bill; 
public:
    void input() {
        cout << "Enter bill amount: ";
        cin >> bill;
    }

    double FinalBill() {        
        if (bill < 1000) {
            return bill;
        } 
        else if (bill >= 1000 && bill < 5000) {
            return 0.95 * bill; 
        } 
        else if (bill >= 5000 && bill < 10000) {
            return 0.90 * bill;
        } 
        else {
            return 0.85 * bill; 
        }
    }

    void output() {        
        double totalAmount = FinalBill();
        cout << "The final bill after discount is: " << totalAmount << endl;
    }
};

int main() {
    Purchase a;

    a.input();   
    a.output(); 

    return 0;
}
