#include <iostream>
using namespace std;

int main() {
    double balance = 5000.0, amount;

    cout << "Enter withdrawal amount: ";
    cin >> amount;
    
    try {
        if (amount <= 0)
            throw 1;
        if (amount > balance)
            throw 2;

        balance -= amount;
        cout << "Transaction Successful!\n";
        cout << "Remaining Balance: " << balance << '\n';
    }
    catch (int errorCode) {
        if (errorCode == 1)
            cout << "Invalid Amount!\n";
        else if (errorCode == 2)
            cout << "Insufficient Balance!\n";
    }
    return 0;
}