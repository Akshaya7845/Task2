#include <iostream>
#include <string>
using namespace std;

void specialHiring() {
    cout << "Special Hiring Process executed.\n";
}

void recruitmentPlan();

void employeeRecruitment() {
    cout << "Arrange Candidate Meeting\n";
    cout << "Conduct Pre-Interview\n";
    cout << "Setup Interview Questions\n";
    cout << "Conduct Interview\n";
    string ref;
    cout << "Good Reference? (yes/no): ";
    cin >> ref;
    if(ref=="yes") {
        string confirm;
        cout << "Select Candidate\n";
        cout << "Candidate Confirm? (yes/no): ";
        cin >> confirm;
        if(confirm=="yes") {
            cout << "Hired\n";
        } else {
            string pay;
            cout << "Evaluate Pay Rate\nSend Employee Offer\n";
            cout << "Candidate Accept? (yes/no): ";
            cin >> pay;
            if(pay=="yes") cout << "Hired\n";
            else cout << "Not Hired\n";
        }
    } else {
        cout << "Not Hired\n";
    }
}

void recruitmentPlan() {
    cout << "Develop Recruitment Plan\n";
    cout << "Place Advertisement\n";
    cout << "Collect Applications\n";
    string resume;
    cout << "Qualified Resume? (yes/no): ";
    cin >> resume;
    if(resume=="yes") {
        employeeRecruitment();
    } else {
        cout << "Rejected\n";
        recruitmentPlan();
    }
}

void regularProcess() {
    string option;
    cout << "Regular Hiring Process? (yes/no): ";
    cin >> option;
    if(option=="yes") {
        cout << "Post Job Internally\n";
        string cand;
        cout << "Suitable Candidate? (yes/no): ";
        cin >> cand;
        if(cand=="yes") {
            employeeRecruitment();
        } else {
            cout << "Review Existing Resume on File\n";
            string c2;
            cout << "Suitable Candidate? (yes/no): ";
            cin >> c2;
            if(c2=="yes") employeeRecruitment();
            else recruitmentPlan();
        }
    } else {
        cout << "Review Existing Resume on File\n";
        string cand;
        cout << "Suitable Candidate? (yes/no): ";
        cin >> cand;
        if(cand=="yes") employeeRecruitment();
        else recruitmentPlan();
    }
}

int main() {
    cout << "Start\n";
    cout << "Define Job Description\n";
    cout << "Send Crew Request to HR\n";
    string type;
    cout << "Special Hiring? (yes/no): ";
    cin >> type;
    if(type=="yes") {
        specialHiring();
    } else {
        regularProcess();
    }
    cout << "End\n";
    return 0;
}