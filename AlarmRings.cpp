#include <iostream>
using namespace std;
void alarmSystem(){
    bool readyToWake = false;
    bool late = false;
    int snoozecount = 0;
    int volume = 5;
    cout << "Alarm Rings\n";
    while (true){
        cout << "\n Are you ready to wake up? (1 = yes,0=no)";
        cin >> readyToWake;

        if (readyToWake){
            cout << "you left the bed -> Alarm turned off.\n";
            break;
        } else {
            cout << "Will YOu be late? (1= yes, 0 = no).\n";
            cin >> late;

            if(late){
                cout << "Emergency Wake Mode activated\n";
                continue;
            } else {
                snoozecount++;
                cout << "amart snooze activated(snooze #" << snoozecount << ")\n";

                if(snoozecount <5){
                    cout << "Snoozing for 5 minutes (simulated)....\n";
                } else {
                    cout << "Too many Snooze Increase Volume.\n";
                    volume = min(volume+2,10);
                }

                cout << "Alarm Rings again at volume" << volume <<"\n";
            }
        }
    }
    cout << "Alarm Process Ended.\n";
}
int main(){
    alarmSystem();
    return 0;
}