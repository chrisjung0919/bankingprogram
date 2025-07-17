#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double balance = 0.00;
    double depositamount = 0.00;
    double withdrawamount = 0.00;

    string userchoice = "";

        while (userchoice != "q"){
        cout << "\n========================================\n";
        cout << "         Welcome to XYZ Bank\n";
        cout << "========================================\n\n";

        cout << "Your current balance is: $" << fixed << setprecision(2) << balance << "\n\n";

        cout << "Thank you for banking with us!\n\n";

        cout << "Enter choice (a - Deposit b - Withdraw q - quit): ";

        cin >> userchoice;

        if (userchoice == "a") {
            cout << "Enter deposit amount: ";
            cin >> depositamount;

            balance += depositamount;
        }
        else if (userchoice == "b") {
            cout << "Enter withdraw amount: ";
            cin >> withdrawamount;

            if (withdrawamount <= balance){
                balance -= withdrawamount; 
            } else if (withdrawamount > balance) {
                cout << "Cannot withdraw more than current balance\n\n";
            }
        }
        else if (userchoice != "a" && userchoice != "b" && userchoice != "q"){
            cout << "Invalid choice please try again\n\n";
        }
    }

    return 0;
}