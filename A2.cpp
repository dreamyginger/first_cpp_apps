// Develop a program that can arrange students' info, using a struct array.
// Structure will contain: registration number, name, surname, year, branch, grade array.
// The program must present a menu that includes:
// A. Insert a new student's data (without grades);
// B. Insert a grade to a reg-num-identified student;
// C. Print details (name, surname, year + branch and grades' average) of a student identified with a registration number;
// D. Print details about every student of a class;
// E. Print details of the student with the best grades' average;
// X. Exit the program.

// Approach: define every function first, and test each before working on another. Later on, make the whole program

#include <iostream>
#include <vector>
using namespace std;

struct students {

    public:
    int regNum = 0;
    string name;
    string surname;
    int year;
    char section;
    vector<float> grades;

    void (*getStudentData1A) (struct students *, int);
    void (*debugPrint1A) (struct students *, int);

};

students studentSelect[10]; // MAX 10 STUDENTS

    void getStudentData(struct students *studentSelect, int i) {

        cout << "Name: ";
        cin >> studentSelect[i].name;
        cout << "Surname: ";
        cin >> studentSelect[i].surname;
        cout << "Year: ";
        cin >> studentSelect[i].year;
        cout << "Section: ";
        cin >> studentSelect[i].section;
        cout << "Registration number: ";
        cin >> studentSelect[i].regNum;

    }

    void debugPrint1(struct students *studentSelect, int i) {
    
        cout << studentSelect[i].name << studentSelect[i].surname << studentSelect[i].year << studentSelect[i].section << studentSelect[i].regNum << "\n";
    }

int main() {
    
    int i;
    studentSelect[i].getStudentData1A = getStudentData;
    studentSelect[i].debugPrint1A = debugPrint1;

    for (int i = 0; i <= 1; ++i) {
        
    getStudentData(studentSelect, i);

    }

    for (int i = 0; i <= 1; ++i) {

    debugPrint1(studentSelect, i);

    }

}

// cout << "== STUDENTS' REGISTER ==\nPlease choose an option:\nA - Register a new student\nB - Register grade\nC - View a student's details\nD - View a class' students\nE - View the best student's details\nX - Exit\n";