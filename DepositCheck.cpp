#include <iostream>
#include <string>
using namespace std;
bool checkValidation() {
    string response;
    cout << "\nCheque Validation" << endl;
    cout << "Checking validation" << endl;
    cout << "7 days passed since the cheque was deposited? (yes/no): ";
    cin >> response;
    if (response == "yes" || response == "Yes") {
        cout << "Money transferred to receiver account." << endl;
        cout << "Validation successful" << endl;
        return true;
    } else {
        string senderReview;
        do {
            cout << "Sender authorized? (yes/no): ";
            cin >> senderReview;
            if (senderReview == "no" || senderReview == "No") {
                cout << "Invalid Transaction." << endl;
                cout << "Validation failed" << endl;
                return false;
            }
        } while (senderReview != "yes" && senderReview != "Yes");
        
        cout << "Sender authorized." << endl;
        cout << "Validation successful" << endl;
        return true;
    }
}

int main() {
    string bankCard, accountNum, chequeValue, senderAccount;
    cout << "cheque deposit process." << endl;
    cout << "Insert bank card to machine: ";
    cin >> bankCard;
    cout << "Enter receiver bank account number: ";
    cin >> accountNum;
    cout << "Receiving bank account: " << accountNum << endl;
    cout << "Insert cheque to machine." << endl;
    cout << "Enter cheque value: ";
    cin >> chequeValue;
    cout << "Enter sender account number: ";
    cin >> senderAccount;
    if (checkValidation()) {
        cout << "\nCheque successfully validated and deposited." << endl;
    } else {
        cout << "\nCheque deposit has been rejected." << endl;
    }

    cout << "End of deposit process." << endl;

    return 0;
}