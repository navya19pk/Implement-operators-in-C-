// Navya Pawan Khajuria 
// 24070123151
// B3

#include <iostream>
using namespace std;

int main() {
    float sub1, sub2, sub3, sub4;
    float total, average;
    char grade;

    cout << "Enter marks for 4 subjects (out of 100):\n";
    cout << "Subject 1: ";
    cin >> sub1;
    cout << "Subject 2: ";
    cin >> sub2;
    cout << "Subject 3: ";
    cin >> sub3;
    cout << "Subject 4: ";
    cin >> sub4;

    total = sub1 + sub2 + sub3 + sub4;
    average = total / 4;

    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';  // Fail

    cout << "\nTotal Marks = " << total << "/400" << endl;
    cout << "Average = " << average << endl;
    cout << "Grade = " << grade << endl;

    return 0;
}

//Output:
//Enter marks for 4 subjects (out of 100):
//Subject 1: 94
//Subject 2: 89
//Subject 3: 99
//Subject 4: 90

//Total Marks = 372/400
//Average = 93
//Grade = A
