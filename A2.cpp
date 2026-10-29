// Develop a program that can arrange students' info, using a struct array.
// Structure will contain: registration number, name, surname, year, branch, grade array.
// The program must present a menu that includes:
// A. Insert a new student's data (without grades);
// B. Insert a grade to a reg-num-identified student;
// C. Print details (name, surname, year + branch and grades' average) of a student identified with a registration number;
// D. Print details about every student of a class;
// E. Print details of the student with the best grades' average;
// X. Exit the program.

#include <iostream>
#include <vector>
using namespace std;

struct student {
    int regNum;
    string name;
    string surname;
    int year;
    int branch;
    vector<float> grade;

};

int index = 0;
string input;
int regNumReply;
float gradeReply;

int main() {
    cout << "== STUDENTS' REGISTER ==\nPlease choose an option:\nA - Register a new student\nB - Register grade\nC - View a student's details\nD - View a class' students\nE - View the best student's details\nX - Exit\n";
    cin >> input;
    student students[index];

    if (input == "A") {
        
        for (int i = 0; i < index; ++i, students[index].regNum = students[index].regNum + 1)
        cout << "Name: ";
        cin >> students[index].name;
        cout << "Surname: ";
        cin >> students[index].surname;
        cout << "Year: ";
        cin >> students[index].year;
        cout << "Branch: ";
        cin >> students[index].branch;

    }

    if (input == "B") {
        
        regNumAsk:
        cout << "Insert the student's registration number: ";
        cin >> regNumReply;

        if (regNumReply = students[index].regNum) {
            
            cout << "Gimme nomba";
            cin >> gradeReply;

            students[index].grade.at(index) = gradeReply;

        } else {
            goto regNumAsk;

        };
        
    }

    if (input == "C") {

    }

    if (input == "D") {

    }

    if (input == "E") {
        
    }

    if (input == "X") {
        
    }

};