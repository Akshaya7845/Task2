#include <iostream>
using namespace std;

int main() {
    bool footBridge, footTunnel;
    string trafficLight;
    bool pedestrianCrossing;
    bool carLeft, carRight, sound;
    cout << "Foot Bridge? (1 = Yes, 0 = No): ";
    cin >> footBridge;
    if (footBridge) {
        cout << "Cross using Foot Bridge.\n";
        return 0;
    }
    cout << "Is there a Foot Tunnel? (1 = Yes, 0 = No): ";
    cin >> footTunnel;
    if (footTunnel) {
        cout << "Cross using Foot Tunnel.\n";
        return 0;
    }
    while (true) {
        cout << "Enter traffic light color (Green/Red): ";
        cin >> trafficLight;
        if (trafficLight == "Green" || trafficLight == "green") {
            cout << "⏳ Wait until traffic light turns Red...\n";
            continue;
        } 
        if (trafficLight == "Red" || trafficLight == "red") {
            cout << "Is pedestrian crossing ON? (1 = Yes, 0 = No): ";
            cin >> pedestrianCrossing;
            if (!pedestrianCrossing) {
                cout << "Wait until pedestrian crossing is ON.\n";
                continue; 
            }
            cout << "Look Left: Is a car approaching? (1 = Yes, 0 = No): ";
            cin >> carLeft;
            if (carLeft) {
                cout << "Car on the left. Wait...\n";
                continue;
            }
            cout << "Look Right: Is a car approaching? (1 = Yes, 0 = No): ";
            cin >> carRight;
            if (carRight) {
                cout << "Car on the right. Wait\n";
                continue;
            }
            cout << "Do you hear any vehicle sound? (1 = Yes, 0 = No): ";
            cin >> sound;
            if (sound) {
                cout << "Sound detected. Wait\n";
                continue;
            }
            cout << " Cross the road.\n";
            break;
        }
    }

    cout << "successfully crossed\n";
    return 0;
}