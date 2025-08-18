#include <iostream>
#include <string>
using namespace std;
void findUmbrella(){
    char found;
    do{
        cout << "search Umbrella : (y/n)";
        cin >> found;
        if (found == 'y' || found == 'Y'){
            cout  << "Bring Umbrella\n";
            break;
        } else {
            cout << "Umbrella not found\n";
        }
    } while (true);
}

void findRaincoat(){
    char found;
    do{
        cout << "Search for raincoat (y/n):";
        cin >> found;
        if (found == 'y' || found =='Y'){
            cout << "Bring rainCoat\n";
            break;
        } else {
            cout << "Raincoat not found...\n";
        }
    } while (true);
}

int main(){
    char rain;
    string transport;
    cout << "weather decision\n";
    cout << "Is rainfall predicted (y/n):";
    cin >> rain;
    if(rain == 'y' || rain == 'Y'){
        cout << "Enter mode of Transport (Walk/bicycle/bike/other) :";
        cin >> transport;

        if(transport == "walk" || transport == "Walk"){
            findUmbrella();
        }
        else if (transport == "bicycle" || transport == "bike" || transport == "Bicycle" || transport == "Bike"){
            findRaincoat();
        } 
        else{
            cout << "other tansport -> no need for umbrella/raincoat.\n";
        }
    }
    else{
        cout << "No rain.\n";
    }
    cout << "End of program.\n";
    return 0;
}