#include <iostream>
#include <string>

using namespace std;
void handleFireDetection();
void alarmActivation();
void cannotOpenDoor();
void evacuationPath();
void balconyPath();
void leaveBuilding();

int main() {
    cout << "Start Process " << endl;
    handleFireDetection();
    return 0;
}

void handleFireDetection() {
    string input;
    cout << "Is fire or smoke detected in the building? (yes/no): ";
    cin >> input;

    if (input == "yes") {
        cout << "How was it detected?" << endl;
        cout << "1. You saw it." << endl;
        cout << "2. Someone else saw it." << endl;
        cout << "3. A smoke detector activated." << endl;

        cout << "Enter the corresponding number (1, 2, or 3): ";
        int detectionMethod;
        cin >> detectionMethod;

        if (detectionMethod == 1 || detectionMethod == 3) {
            alarmActivation();
        } else if (detectionMethod == 2) {
            cout << "You are not in the building. Contact the Fire Department immediately." << endl;
        } else {
            cout << "Invalid input. Please start the process again." << endl;
        }
    } else {
        cout << "No fire or smoke detected. The process ends." << endl;
    }
}

void alarmActivation() {
    string doorState;
    cout << "Alarm Activation" << endl;
    cout << "1. Push the fire alarm." << endl;
    cout << "2. Bring essentials (keys, phone)." << endl;
    cout << "Is the door hot or cool? (hot/cool): ";
    cin >> doorState;

    if (doorState == "hot") {
        cannotOpenDoor();
    } else {
        evacuationPath();
    }
}

void cannotOpenDoor() {
    string smokeEntering;
    cout << "\n Cannot Open Door" << endl;
    cout << "Is smoke entering the room? (yes/no): ";
    cin >> smokeEntering;

    if (smokeEntering == "yes") {
        cout << "1. Seal door with wet towels." << endl;
        cout << "2. Contact the Fire Department." << endl;
        cout << "3. Wait for rescue by waving at windows." << endl;
    } else {
        cout << "Open the door and proceed." << endl;
        evacuationPath();
    }
}

void evacuationPath() {
    string traffic;
    cout << "\n Evacuation Path" << endl;
    cout << "Is there traffic or smoke on the stairs? (yes/no): ";
    cin >> traffic;
    if (traffic == "yes") {
        balconyPath();
    } else {
        leaveBuilding();
    }
}
void balconyPath() {
    string reachedBalcony;
    cout << "\nBalcony Path\n" << endl;
    cout << "reached the balcony? (yes/no): ";
    cin >> reachedBalcony;
    if (reachedBalcony == "yes") {
        cout << "Wait for rescue." << endl;
    } else {
        cout << "enter a safe room." << endl;
    }
}
void leaveBuilding() {
    string exited;
    cout << "\n leave the building" << endl;
    cout << "Go downstairs until you leave the building." << endl;
    cout << "Exit the building? (yes/no): ";
    cin >> exited;

    if (exited == "yes") {
        cout << "successfully evacuated!" << endl;
    } else {
        leaveBuilding(); 
    }
}