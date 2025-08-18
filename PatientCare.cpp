#include <iostream>
#include <string>
using namespace std;

void appointmentProcess(){
    char preApp;
    cout << "Has the patient pre-appointment(y/n):";
    cin >> preApp;
    if (preApp == 'y' || preApp == 'Y'){
        cout << "Go to written page.\n";
    } else {
        cout << "Registering new patient.\n";
    }
}

void nurseProcess(){
    char nurse;
    cout << "Is nurse available (y/n):";
    cin >> nurse;
    while(nurse == 'n' || nurse == 'N')
    {
        cout << "Nurse not available.\n";
        cout << "Wait Until available";
        cout << "Is nurse available (y/n):";
        cin >> nurse;
    }
    if (nurse =='y' || nurse =='Y'){
        cout << "Nurse available -> checking vitals and record health condition.\n";
    } 
}

void doctorProcess(){
    char doctor,followup;
    cout << "Is doctor available (y/n):";
    cin >> doctor;
    while(doctor == 'n' || doctor == 'N')
    {
         cout << "Doctor not available.\n";
         cout << "Wait for Doctor\n";
         cout << "Is doctor available (y/n):";
          cin >> doctor;
    }
    if (doctor =='y' || doctor =='Y'){
        cout << "Doctor available -> consulting Patient.\n";
        cout << "Is Followup Needed (y/n):";
        cin >> followup;
        if(followup == 'y' || followup == 'Y')
        {
            cout<<"Arrange Appointment.\n";
        }
        cout << "Provide Prescription\n";
    } 
}

void medicationProcess(){
    char med;
    cout << "Is medicine available (y/n):";
    cin >> med;
    if(med == 'y' || med == 'Y'){
        cout << "Medicine Available -> Brought to patient.\n";
    } else {
        cout << "Medicine not available -> checking other pharmacy...\n";
        cout << "Medicine found in other pharmacy -> Brought to patient.\n";
    }
}

void paymentProcess(){
    int method;
    cout << "Payment Methods.\n";
    cout << "1.Cash\n2.UPI(Gpay/PhonePay)\n3.CardCard Payment\n";
    cout << "Choose payment method(1/2/3):";
    cin >> method;

    switch(method){
        case 1:
        cout << "Cash received -> payment Completed.\n";
        break;

        case 2: {
            string upi;
            cout << "Enter UPI ID: ";
            cin >> upi;
            cout << "Processing payment via UPI ("<< upi << ").... Payment Completed.\n";
            break;
        }
        case 3: {
            int pin;
            cout << "enter card pin:";
            cin >> pin;
            cout << "Processing card payment..... Payment Completed.\n";
            break;
        }
        default:
        cout << "Invalid option. Payment Failed.\n";
    }
}

int main(){
    cout  << "Hospital Patient care System.\n";
    appointmentProcess();
    nurseProcess();
    doctorProcess();
    medicationProcess();
    paymentProcess();
    cout << "\n Patient leaves hospital -> End of process.\n";
    return 0;
}