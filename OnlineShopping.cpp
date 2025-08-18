#include <iostream>
#include <string>
using namespace std;
void deliveryAndConfirmation() {
    cout << "\nDelivery and Confirmation Process" << endl;
    cout << "Delivery Host confirmed." << endl;
    cout << "Sending warehouse goods to customer." << endl;
    cout << "Customer collects the goods." << endl;
    cout << "Seller confirms payment received." << endl;
    cout << "Delivery and confirmation process complete." << endl;
}
void onlineShoppingProcess() {
    cout << "Shopping Process" << endl;
    cout << "Order Placed." << endl;
    bool allItemsVerified = false;
    string input;
    do {
        cout << "\nitem in warehouse? (yes/no): ";
        cin >> input;
        if (input == "yes" || input == "YES") {
            cout << "Item is in warehouse." << endl;
            cout << "Packing item with other orders in warehouse." << endl;
        } else {
            cout << "Item is NOT in warehouse." << endl;
            cout << "Contacting seller to ship the good to warehouse." << endl;
        }
        cout << "\nAny item left to process? (yes/no): ";
        cin >> input;

        if (input == "no" || input == "NO") {
            allItemsVerified = true;
        }

    } while (!allItemsVerified);

    cout << "\nAll items verified." << endl;
    deliveryAndConfirmation();
    cout << "\nprocess complete." << endl;
}

int main() {
    onlineShoppingProcess();
    return 0;
}