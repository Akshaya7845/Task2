#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string currentUser, currentPass;

void forgetPassword() {
    cout << "Enter new password for " << currentUser << ": ";
    cin >> currentPass;
    ofstream file("users.csv", ios::app);
    file << currentUser << "," << currentPass << "\n";
    file.close();
    cout << "Password Reset Successful!\n";
}

bool checkCredentials() {
    cout << "Enter Username: ";
    cin >> currentUser;
    cout << "Enter Password: ";
    cin >> currentPass;

    ifstream file("users.csv");
    string u, p;
    bool valid = false;
    while (file >> u) {
        size_t pos = u.find(',');
        if (pos != string::npos) {
            string name = u.substr(0, pos);
            string pass = u.substr(pos + 1);
            if (name == currentUser && pass == currentPass) {
                valid = true;
                break;
            }
        }
    }
    file.close();

    if (!valid) {
        string choice;
        cout << "Invalid Credentials. Forgot Password? (yes/no): ";
        cin >> choice;
        if (choice == "yes") {
            forgetPassword();
            return true;
        } else {
            return checkCredentials();
        }
    }
    cout << "Login Successful!\n";
    return true;
}

void registerUser() {
    cout << "Enter new username: ";
    cin >> currentUser;
    cout << "Enter new password: ";
    cin >> currentPass;
    ofstream file("users.csv", ios::app);
    file << currentUser << "," << currentPass << "\n";
    file.close();
    cout << "Registration Successful!\n";
}

void userFlow() {
    string choice;
    cout << "Are you a registered user? (yes/no): ";
    cin >> choice;
    if (choice == "yes") {
        if (checkCredentials()) {
            cout << "Look for desired vehicle\n";
            cout << "Make payment\n";
            cout << "Process Completed\n";
        }
    } else {
        registerUser();
        if (checkCredentials()) {
            cout << "Look for desired vehicle\n";
            cout << "Make payment\n";
            cout << "Process Completed\n";
        }
    }
}

void adminFlow() {
    string pass;
    while (true) {
        cout << "Enter Admin Password: ";
        cin >> pass;
        if (pass == "admin123") {
            int choice;
            do {
                cout << "Choose Application:\n1. Update Car Library\n2. Answer Customer Enquiries\n3. Logout\n";
                cin >> choice;
                if (choice == 1) cout << "Car Library Updated\n";
                else if (choice == 2) cout << "Customer Enquiries Answered\n";
            } while (choice != 3);
            break;
        } else {
            cout << "Invalid Admin Password. Try again.\n";
        }
    }
}

int main() {
    string choice;
    cout << "Is Admin? (yes/no): ";
    cin >> choice;
    if (choice == "yes") {
        adminFlow();
    } else {
        userFlow();
    }
    cout << "End of Process\n";
    return 0;
}