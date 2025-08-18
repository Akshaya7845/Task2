#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    while (true) {
        cout << "Enter the score (0 - 100): ";
        cin >> score;
        if (score < 0 || score > 100) {
            cout << "Invalid score\n";
            continue; 
        }
        if (score >= 80) {
            grade = 'A';
        } else if (score >= 60) {
            grade = 'B';
        } else if (score >= 50) {
            grade = 'C';
        } else {
            grade = 'F';
        }

        cout << "Grade: " << grade << endl;
        break;
    }

    cout << "Process end\n";
    return 0;
}