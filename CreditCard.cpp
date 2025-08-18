#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void postTransactionHandling() {
    cout << "Post Transaction Handling" << endl;
    cout << "Send notification to COD holder" << endl;
    cout << "COD holder receives monthly statement" << endl;
    cout << "Return to main process" << endl;
}
int main() {
    cout << "Start" << endl;
    cout << "Order placed by client" << endl;
    string cardValid;
    cout << "Is COD valid? (yes/no): ";
    cin >> cardValid;
    if (cardValid == "no") {
        cout << "Invalid COD, transaction failed" << endl;
        cout << "End" << endl;
        return 0;
    }
    string funds;
    cout << "Funds available? (yes/no): ";
    cin >> funds;
    if (funds == "no") {
        cout << "Insufficient funds, transaction failed" << endl;
        cout << "End" << endl;
        return 0;
    }
    string bankVerify;
    cout << "Payment verified by bank? (yes/no): ";
    cin >> bankVerify;
    if (bankVerify == "no") {
        cout << "Bank rejected, transaction failed" << endl;
        cout << "End" << endl;
        return 0;
    }
    string accountValid;
    cout << "Is account valid? (yes/no): ";
    cin >> accountValid;
    if (accountValid == "no") {
        cout << "Invalid account, transaction failed" << endl;
        cout << "End" << endl;
        return 0;
    }
    string fraudCheck;
    cout << "Fraud check passed? (yes/no): ";
    cin >> fraudCheck;
    if (fraudCheck == "no") {
        cout << "Suspicious transaction, failed" << endl;
        cout << "End" << endl;
        return 0;
    }
    postTransactionHandling();
    ofstream db("customer_database.csv", ios::app);
    if (!db) {
        cout << "Error creating customer database file!" << endl;
        return 1;
    }
    db << "Transaction Complete,Cardholder Notified\n";
    db.close();
    cout << "Transaction complete." << endl;
    cout << "Cardholder received statement." << endl;
    cout << "End" << endl;
    return 0;
}