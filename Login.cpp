#include <iostream>
#include <string>
using namespace std;

bool twoFactorAuth() {
    cout << "Sending OTP to user..." << endl;
    string otpVerified;
    cout << "Is OTP verified? (yes/no): ";
    cin >> otpVerified;
    if (otpVerified == "yes") {
        cout << "Access Granted" << endl;
        return true;
    } else {
        cout << "Alert User: OTP verification failed" << endl;
        return false;
    }
}
int main() {
    cout << "Start" << endl;
    int attempts = 0;
    const int maxAttempts = 5;
    bool loggedIn = false;
    while (!loggedIn) {
        cout << "Login attempt(enter success/fail): ";
        string loginResult;
        cin >> loginResult;
        if (loginResult == "fail") {
            attempts++;
            if (attempts >= maxAttempts) {
                cout << "Account Locked. Alert User." << endl;
                cout << "End" << endl;
                return 0;
            }
            cout << "Invalid login." << endl;
            continue;
        }
        cout << "Login successful." << endl;
        string forgot;
        cout << "Forgot password? (yes/no): ";
        cin >> forgot;

        if (forgot == "yes") {
            cout << "Password reset successful." << endl;
            continue;
        }
        string authorized;
        cout << "Is user authorized? (yes/no): ";
        cin >> authorized;
        if (authorized == "no") {
            cout << "Invalid user." << endl;
            continue;
        }
        cout << "Two-Factor Authentication..." << endl;
        bool granted = twoFactorAuth();
        if (granted) {
            loggedIn = true; 
        } else {
            cout << "Return to login process" << endl;
            continue;
        }
    }
    cout << "Process complete." << endl;
    return 0;
}