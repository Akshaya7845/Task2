#include <iostream>
#include<fstream>
using namespace std;

int main() {
    bool verified = false;
    bool needVisa, visaApplied;
    bool feesPaid;
    bool needAccommodation;
    bool meetTutor, extraCredits, chooseCourses;
    cout << "Student Registration System\n";
    cout << "Complete Registration Form.\n";
    cout << "Registration Form stored in system.\n";
    while (!verified) {
        cout << "Has the Admission Office verified the form? (1 = Yes, 0 = No): ";
        cin >> verified;
        if (!verified) {
            cout << "Waiting for verification.Please check.\n";
        }
    }
    cout << "Registration form verified by Admission Office.\n";
    cout << "Sending form to corresponding departments...\n";
    cout << "\nDo you need a visa? (1 = Yes, 0 = No): ";
    cin >> needVisa;
    if (needVisa) {
        visaApplied = false;
        while (!visaApplied) {
            cout << "Has the student applied for Visa? (1 = Yes, 0 = No): ";
            cin >> visaApplied;
            if (!visaApplied) {
                cout << "Inform student to apply for Visa.\n";
            }
        }
        cout << "Visa completed.\n";
    } else {
        cout << "Visa not required.\n";
    }
    feesPaid = false;
    while (!feesPaid) {
        cout << "\nHas the student paid tuition fees? (1 = Yes, 0 = No): ";
        cin >> feesPaid;
        if (!feesPaid) {
            cout << "Waiting for tuition fee payment\n";
        }
    }
    cout << "Tuition fees paid.\n";
    cout << "\nstudent need accommodation? (1 = Yes, 0 = No): ";
    cin >> needAccommodation;
    if (needAccommodation) {
        cout << "Accommodation assigned .\n";
    } else {
        cout << "No accommodation requested.\n";
    }
    cout << "\nMeeting with personal tutor scheduled.\n";
    cout << "Do you need extra credits? (1 = Yes, 0 = No): ";
    cin >> extraCredits;

    if (extraCredits) {
        cout << "Extra credits.\n";
    } else {
        cout << "Do you want to choose additional courses? (1 = Yes, 0 = No): ";
        cin >> chooseCourses;
        if (chooseCourses) {
            cout << "Additional courses.\n";
        } else {
            cout << "No additional courses.\n";
        }
    }
    cout << "\nStudent fully registered\n";
    cout << "Student Information.\n";
    ofstream file("student_info.csv",ios::app);
    if(file.is_open()){
        if(file.tellp() == 0){
            file << "Verified,VisaNeeded,VisaApplied,FeesPaid,Accomodation,ExtraCredits,AdditionalCourses\n";
        }
        file << (verified ? "Yes" : "No") << "," << (needVisa ? "Yes" : "No")<< "," << (needVisa ? (visaApplied ? "Yes" : "No") : "N/A") << "," << (feesPaid ?  "Yes" : "No" ) << (needAccommodation ? "Yes" : "No") << "," <<(extraCredits ? "Yes" : "No") << (chooseCourses ? "Yes" : "No") << "\n";
        file.close();
        cout << "Student Detail saved" << endl;
    }
    else {
        cout << "Error could not open file" << endl;
    }

    cout << "Registration Process Completed\n";

    return 0;
}