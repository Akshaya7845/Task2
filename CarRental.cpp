#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

string currentUser, currentPass;
vector<pair<string, string>> readUsers() {
    vector<pair<string, string>> users;
    ifstream file("users.csv");
    string line;
    while (getline(file, line)) {
        size_t pos = line.find(',');
        if (pos != string::npos) {
            string username = line.substr(0, pos);
            string password = line.substr(pos + 1);
            users.push_back({username, password});
        }
    }
    file.close();
    return users;
}
void writeUsers(const vector<pair<string, string>>& users) {
    ofstream file("users.csv", ios::trunc);
    for (const auto& user : users) {
        file << user.first << "," << user.second << "\n";
    }
    file.close();
}

void forgetPassword() {
    cout << "Enter new password for " << currentUser << ": ";
    cin >> currentPass;

    vector<pair<string, string>> users = readUsers();
    bool updated = false;
    for (auto& user : users) {
        if (user.first == currentUser) {
            user.second = currentPass;
            updated = true;
            break;
        }
    }

    if (!updated) {
        users.push_back({currentUser, currentPass});
    }

    writeUsers(users);
    cout << "Password Reset Successful!\n";
}

bool checkCredentials() {
    cout << "Enter Username: ";
    cin >> currentUser;
    cout << "Enter Password: ";
    cin >> currentPass;

    vector<pair<string, string>> users = readUsers();
    for (const auto& user : users) {
        if (user.first == currentUser && user.second == currentPass) {
            cout << "Login Successful!\n";
            return true;
        }
    }

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

void registerUser() {
    cout << "Enter new username: ";
    cin >> currentUser;
    cout << "Enter new password: ";
    cin >> currentPass;

    vector<pair<string, string>> users = readUsers();
    for (const auto& user : users) {
        if (user.first == currentUser) {
            cout << "Username already exists. Try logging in.\n";
            return;
        }
    }

    users.push_back({currentUser, currentPass});
    writeUsers(users);
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
