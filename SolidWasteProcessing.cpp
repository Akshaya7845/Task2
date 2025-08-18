#include <iostream>
#include <string>
using namespace std;
void hazardousWasteFlow();
void organicWasteFlow();
void eWasteFlow();
void plasticWasteFlow();
void reusableRecyclableFlow();

void hazardousWasteFlow() {
    cout << "Hazardous Waste." << endl;
    string type;
    cout << "infectious waste? (Yes/No): ";
    cin >> type;

    if (type == "Yes" || type == "yes") {
        cout << "Hazardous Waste is Medical Waste." << endl;
    } else {
        cout << "type of hazardous waste? (Chemical/Radio Active): ";
        cin >> type;
        if (type == "Chemical" || type == "chemical") {
            cout << "Hazardous Waste is Chemical Waste." << endl;
        } else if (type == "Radio Active" || type == "radio active") {
            cout << "Radio Active Waste." << endl;
        }
    }
    cout << "Returned to main flow." << endl;
}
void organicWasteFlow() {
    cout << "Organic Waste." << endl;
    string type;
    cout << "high energy? (Yes/No): ";
    cin >> type;

    if (type == "Yes" || type == "yes") {
        cout << "Bio Fuel." << endl;
    } else {
        cout << "composted (Yes/No): ";
        cin >> type;
        if (type == "Yes" || type == "yes") {
            cout << "Community Compost." << endl;
        } else {
            cout << "Fertilizer." << endl;
        }
    }
    cout << "Returned to main flow." << endl;
}

// E-Waste (E) function
void eWasteFlow() {
    cout << "E-Waste." << endl;
    string type;
    cout << "E-Waste? (Yes/No): ";
    cin >> type;

    if (type == "Yes" || type == "yes") {
        cout << "Precious Metals." << endl;
        cout << "Recycling Compounds." << endl;
    } else {
        cout << "Waste is not E-Waste." << endl;
    }
    cout << "Returned to main flow." << endl;
}
void plasticWasteFlow() {
    cout << "Plastic Waste." << endl;
    string type;
    cout << "single-use plastic? (Yes/No): ";
    cin >> type;

    if (type == "Yes" || type == "yes") {
        cout << "Plastic to Fuel Plant." << endl;
    } else {
        cout << "Plastic Recycling." << endl;
    }
    cout << "Returned to main flow." << endl;
}
void reusableRecyclableFlow() {
    cout << "Reusable/Recyclable." << endl;
    string type;
    cout << "reusable/recyclable? (Yes/No): ";
    cin >> type;

    if (type == "Yes" || type == "yes") {
        cout << "Reuse for other applications." << endl;
    } else {
        cout << "recyclable? (Yes/No): ";
        cin >> type;
        if (type == "Yes" || type == "yes") {
            cout << "Recycling Manufacturing." << endl;
        }
    }
    cout << "Returned to main flow." << endl;
}

int main() {
    string wasteType;
    cout << "Start Waste Segregation Process." << endl;
    cout << "Enter the waste type to be processed (Organic/Hazardous/E-Waste/Plastic/Reusable/Landfill). Enter 'End' to finish." << endl;
    cout << "Waste Type: ";
    cin >> wasteType;

    while (wasteType != "End") {
        if (wasteType == "Organic" || wasteType == "organic" || wasteType == "O") {
            organicWasteFlow();
        } else if (wasteType == "Hazardous" || wasteType == "hazardous" || wasteType == "H") {
            hazardousWasteFlow();
        } else if (wasteType == "E-Waste" || wasteType == "e-waste" || wasteType == "E") {
            eWasteFlow();
        } else if (wasteType == "Plastic" || wasteType == "plastic" || wasteType == "P") {
            plasticWasteFlow();
        } else if (wasteType == "Reusable" || wasteType == "reusable" || wasteType == "R") {
            reusableRecyclableFlow();
        } else if (wasteType == "Landfill" || wasteType == "landfill") {
            cout << "Waste sent to Landfill." << endl;
        } else {
            cout << "Invalid waste type." << endl;
        }
        cout << "\nnext waste type or 'End' to finish: ";
        cin >> wasteType;
    }

    cout << "Process finished. All waste segregated." << endl;
    return 0;
}