#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void logErrorToCSV(const string& issue, const string& solution) {
    ofstream errorFile("errors.csv", ios::app);
    errorFile << "\"" << issue << "\",\"" << solution << "\"\n";
    errorFile.close();
    cout << "Error report to errors.csv" << endl;
}
void feedback() {
    string response;
    cout << "to provide feedback? (Yes/No): ";
    cin >> response;
    if (response == "Yes" || response == "yes") {
        cout << "Thank you! A survey link will be sent." << endl;
    }
}
void errorAnalysis(const string& issueDescription) {
    string issueSolved, solutionDescription;
    do {
        cout << "Describe the solution: ";
        cin.ignore();
        getline(cin, solutionDescription);
        cout << "Is the issue fixed? (Yes/No): ";
        cin >> issueSolved;
    } while (issueSolved == "No" || issueSolved == "no");
    logErrorToCSV(issueDescription, solutionDescription);
    cout << "Issue fixed." << endl;
}
int main() {
    string customerResponse, issueDescription;
    bool issueResolved = false;
    cout << "Customer Service Portal" << endl;
    while (!issueResolved) {
        cout << "enquiry? (Yes/No): ";
        cin >> customerResponse;
        if (customerResponse == "Yes" || customerResponse == "yes") {
            cout << "Answering enquiry. Issue fixed." << endl;
            issueResolved = true;
        } else {
            cout << "sales issue? (Yes/No): ";
            cin >> customerResponse;
            if (customerResponse == "Yes" || customerResponse == "yes") {
                cout << "Redirecting to sales. Issue fixed." << endl;
                issueResolved = true;
            } else {
                cout << "technical issue? (Yes/No): ";
                cin >> customerResponse;
                if (customerResponse == "Yes" || customerResponse == "yes") {
                    cout << "Testing new issue if required." << endl;
                }
                cout << "Describe the issue: ";
                cin.ignore();
                getline(cin, issueDescription);
                errorAnalysis(issueDescription);
                issueResolved = true;
            }
        }
    }

    string confirmation;
    cout << "Is the customer happy with the fix? (Yes/No): ";
    cin >> confirmation;
    if (confirmation == "Yes" || confirmation == "yes") {
        feedback();
    } else {
        cout << "Re-opening issue for review." << endl;
    }

    cout << "End of customer service." << endl;
    return 0;
}