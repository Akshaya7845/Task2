#include<iostream>
using namespace std;
int main(){
    bool PowerOn =  true;
    int Waterlevel,choice,PowerPress;
    cout << "Coffee machine start" << endl;

    while(PowerOn){
        cout << "Check Waterlevel (1 = Enough, 0 = Refill)"  << endl;
        cin >> Waterlevel;

        if(Waterlevel == 0){
            cout << "Adding Water" << endl;
        }

        cout << "\nSelect Coffee type:\n";
        cout << "1.Latte\n";
        cout << "2.Espresso\n";
        cout << "3.Mocha\n";
        cin >> choice;

        switch(choice){
            case 1:
            cout << "Latte selected.\n";
            cout << "adding Frothed milk. \n";

            case 2:
            if(choice == 2){
                cout << "Espresso selected. \n";
            }

            case 3:
            if (choice == 3){
                cout << "Mocha Selected.\n";
                cout << "Adding chocolate powder. \n";
                cout << "Adding frothed milk.\n";
            }

            default:
            if(choice >= 1 && choice <= 3){
                cout << "Adding hot coffee.\n";
            } else {
                cout << "Invalid choice.\n";
            }
        }
        cout << "\nPress power button(1 = Yes, 0 = No):";
        cin >> PowerPress;
        if(PowerPress == 1){
            cout << "Powering off..\n";
            PowerOn = false;
        }
    }
    cout << "Coffee Machine Stopped.\n";
    return 0;
}