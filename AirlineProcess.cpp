#include <iostream>
#include <string>
using namespace std;
void securityScreening();
void boardingAndFlight();
void arrivalAndExit();
int main() {
    cout << "Start" << endl;
    cout << "Check In" << endl;
    cout << "Baggage Drop" << endl;
    securityScreening();
    boardingAndFlight();
    arrivalAndExit();
    cout << "End" << endl;
    return 0;
}
void securityScreening() {
    cout << "Security Screening (S)" << endl;
    string restrictedArticles;
    cout << "Restricted Articles detected? (yes/no): ";
    cin >> restrictedArticles;
    if (restrictedArticles == "yes") {
        cout << "Give Up Articles above permitted limit" << endl;
    }
    string metalDetection;
    cout << "Metal detected? (yes/no): ";
    cin >> metalDetection;
    if (metalDetection == "yes") {
        cout << "Hand Search" << endl;
    }
    string dangerousGoods;
    cout << "Dangerous Goods detected? (yes/no): ";
    cin >> dangerousGoods;
    if (dangerousGoods == "yes") {
        cout << "Give Up Dangerous Goods" << endl;
    }
    cout << "Immigration" << endl;
    cout << "RTN" << endl;
}
void boardingAndFlight() {
    cout << "Boarding and Flight (B)" << endl;
    cout << "Immigration" << endl;
    cout << "Board flight" << endl;
    cout << "Flight Departs" << endl;
    cout << "Flight lands" << endl;
    cout << "RTN" << endl;
}
void arrivalAndExit() {
    cout << "Arrival and Exit (A)" << endl;
    cout << "Leave Flight" << endl;
    cout << "Immigration (Arrival side)" << endl;
    string connectionNeeded;
    cout << "Connection Needed? (yes/no): ";
    cin >> connectionNeeded;
    if (connectionNeeded == "yes") {
        securityScreening();
    }
    string permitToEnterCountry;
    cout << "Permit to enter Country? (yes/no): ";
    cin >> permitToEnterCountry;
    if (permitToEnterCountry == "no") {
        cout << "Send to Originate Country" << endl;
    }
    cout << "Collect Baggage" << endl;
    cout << "RTN" << endl;
}