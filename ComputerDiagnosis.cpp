#include <iostream>
#include <string>
using namespace std;
void checkOtherCondition();
int main() {
    cout << "Start(S)" << endl;
    string computerIsOn;
    cout << "Is the computer on? (yes/no): ";
    cin >> computerIsOn;
    if (computerIsOn == "yes") {
        string hasErrorMessage;
        cout << "error message? (yes/no): ";
        cin >> hasErrorMessage;
        if (hasErrorMessage == "yes") {
            cout << "Perform Diagnosis" << endl;
            cout << "Loop back to Start(S)" << endl;
        } else {
            cout << "Computer is in good condition" << endl;
        }
    } else {
        cout << "Check other condition (C)" << endl;
        checkOtherCondition();
    }
    cout << "End" << endl;
    return 0;
}

void checkOtherCondition() {
    cout << "Check other condition (C)" << endl;
    string isComputerNotOn;
    cout << "Is the computer not on? (yes/no): ";
    cin >> isComputerNotOn;
    if (isComputerNotOn == "yes") {
        string isPowerLightOn;
        cout << "power light on? (yes/no): ";
        cin >> isPowerLightOn;
        if (isPowerLightOn == "yes") {
            cout << "Find a specialist" << endl;
            cout << "RTN" << endl;
        } else {
            string isPowerPlugged;
            cout << "power plugged to the wall? (yes/no): ";
            cin >> isPowerPlugged;
            if (isPowerPlugged == "yes") {
                cout << "Find a specialist" << endl;
                cout << "RTN" << endl;
            } else {
                cout << "Plug Power to Wall" << endl;
                cout << "Loop back to Start(S)" << endl;
            }
        }
    }
}