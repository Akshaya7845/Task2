#include <iostream>
#include <string>
using namespace std;
void gateCountdown() {
    cout << "\n Starting gate countdown process" << endl;
    string allPassengers;
    bool gateClosed = false;

    do {
        cout << "Are all passengers aboard? (yes/no): ";
        cin >> allPassengers;
        if (allPassengers == "yes") {
            cout << "All passengers are aboard." << endl;
            break;
        } else {
            cout << "Final announcement" << endl;
            cout << "Gate closing in 5 minutes..." << endl;
        }
    } while (allPassengers == "no");
    if (allPassengers != "yes") {
        cout << "Closing gate. Boarding is complete." << endl;
    }
    cout << "Gate countdown process ended" << endl;
}
int main() {
    string firstClass;
    string allBoarded;
    cout << "Boarding has started." << endl;
    cout << "Are you in First Class? (yes/no): ";
    cin >> firstClass;

    if (firstClass == "yes") {
        cout << "You can board the plane now." << endl;
    } else {
        do {
            cout << "Waiting for general boarding." << endl;
            cout << "Have all passengers boarded? (yes/no): ";
            cin >> allBoarded;
            if (allBoarded == "yes") {
                cout << "All general passengers have boarded." << endl;
                break;
            }
        } while (allBoarded == "no");
    }
    gateCountdown();
    cout << "\nBoarding process complete." << endl;
    return 0;
}