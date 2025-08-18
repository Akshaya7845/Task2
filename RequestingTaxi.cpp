#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void assignTaxi();
int main() {
    cout << "Start" << endl;
    ofstream ordersDB("orders.txt", ios::app); 
    ofstream taxisDB("taxis.txt", ios::app); 
    ofstream historyDB("history.txt", ios::app); 

    if (!ordersDB || !taxisDB || !historyDB) {
        cout << "Error creating database files!" << endl;
        return 1;
    }
    string orderMethod;
    cout << "Customer makes order by phone or online/software? (phone/online): ";
    cin >> orderMethod;
    if (orderMethod == "phone") {
        cout << "Call center requests a server" << endl;
        ordersDB << "Order received via phone\n";
    } else if (orderMethod == "online") {
        cout << "Online form/software sends request to server" << endl;
        ordersDB << "Order received via online\n";
    }
    cout << "Incoming Order Database" << endl;
    string readyForPickup;
    cout << "30 minutes to pickup? (yes/no): ";
    cin >> readyForPickup;
    if (readyForPickup == "no") {
        cout << "Wait 1 minute" << endl;
    }
    cout << "Find taxi: 10 km within pickup location" << endl;
    string taxiFound;
    cout << "Taxi Found? (yes/no): ";
    cin >> taxiFound;
    if (taxiFound == "no") {
        cout << "Wait 1 minute" << endl;
        taxisDB << "No taxi found nearby\n";
    } else {
        taxisDB << "Taxi found and assigned\n";
    }
    cout << "Assignment and ride confirmation (A)" << endl;
    assignTaxi();
    historyDB << "Order completed successfully\n";
    cout << "End" << endl;
    ordersDB.close();
    taxisDB.close();
    historyDB.close();
    return 0;
}

void assignTaxi() {
    cout << "Assign Passenger to driver" << endl;
    cout << "Taxi ride" << endl;
    cout << "Order History" << endl;
    cout << "Available Taxi" << endl;
    cout << "RTN" << endl;
}