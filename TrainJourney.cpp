#include <iostream>
#include <string>
using namespace std;
void boardingProcess();
void ticketCheckingAndJourneyCompletion();
int main() {
    cout << "Start" << endl;
    cout << "Buy Ticket" << endl;
    string hasReservation;
    cout << "seat reservation? (yes/no): ";
    cin >> hasReservation;
    if (hasReservation == "yes") {
        cout << "Select Seat" << endl;
    }
    cout << "Collect Ticket" << endl;
    cout << "Ticket machine OR Mail" << endl;
    string collectionMethod;
    cout << "Collect from ticket machine or wait for mail? (machine/mail): ";
    cin >> collectionMethod;
    if (collectionMethod == "mail") {
        cout << "Check letter box in 3 days" << endl;
    }
    boardingProcess();
    cout << "END" << endl;
    return 0;
}

void boardingProcess() {
    cout << "Boarding Process (B)" << endl;
    cout << "Board Train" << endl;
    string haveReservation;
    cout << "Do you have a reservation? (yes/no): ";
    cin >> haveReservation;
    if (haveReservation == "yes") {
        cout << "Look for Assigned Seat" << endl;
    } else {
        cout << "Look for Unassigned Seat" << endl;
    }
    ticketCheckingAndJourneyCompletion();
    cout << "RTN (Return to main)" << endl;
}
void ticketCheckingAndJourneyCompletion() {
    cout << "Ticket Checking and Journey Completion (T)" << endl;
    cout << "Ticket checked by Inspector" << endl;
    string isDiscountedTicket;
    cout << "Is it a discounted ticket? (yes/no): ";
    cin >> isDiscountedTicket;
    if (isDiscountedTicket == "yes") {
        cout << "Show valid documentation" << endl;
    }
    string arrived;
    do {
        cout << "Arrived at Destination? (yes/no): ";
        cin >> arrived;
        if (arrived == "no") {
            cout << "Waiting for destination..." << endl;
        }
    } while (arrived == "no");
    cout << "Leave Train" << endl;
    cout << "RTN (Return to B)" << endl;
}