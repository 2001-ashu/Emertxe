#include <iostream>
#include <string>

using namespace std;

class ATM {
private:
    string cardNum;
    string customerName;
    double balance;
    int pin;

public:
    ATM(string cardNum, string customerName, double balance, int pin) {
        this->cardNum = cardNum;
        this->customerName = customerName;
        this->balance = balance;
        this->pin = pin;
    }

    void checkBalance() {
        cout << "Your balance is: " << balance << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal successful. Remaining balance is: " << balance << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    void changePin(int oldPin, int newPin) {
        if (pin == oldPin) {
            pin = newPin;
            cout << "Pin changed successfully" << endl;
        } else {
            cout << "Incorrect old pin. Pin change failed" << endl;
        }
    }

    void mainMenu() {
        int choice;
        int enteredPin;

        cout << "Welcome, " << customerName << endl;
        cout << "Choose an option:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Change Pin" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        cout << "Enter your pin: ";
        cin >> enteredPin;

        if (enteredPin == pin) {
            switch (choice) {
                case 1:
                    checkBalance();
                    break;
                case 2:
                    double amount;
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    withdraw(amount);
                    break;
                case 3:
                    int oldPin, newPin;
                    cout << "Enter your old pin: ";
                    cin >> oldPin;
                    cout << "Enter your new pin: ";
                    cin >> newPin;
                    changePin(oldPin, newPin);
                    break;
                case 4:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid choice" << endl;
            }
        } else {
            cout << "Incorrect pin. Exiting..." << endl;
        }
    }
};

int main() {
    ATM customer("123456789", "John Doe", 1000, 1234);
    customer.mainMenu();

    return 0;
}
 