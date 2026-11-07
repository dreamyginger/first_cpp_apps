// Develop a program that can arrange students' info, using a struct array. !! results in segmentation fault....
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

class student {

    private:

    int regNum = 1;
    string name;
    string surname;
    int year;
    char section;
    vector<float> grades;

    public:

    student() {}

    student(int regNum, string name, string surname, int year, char section, vector<float> grades) {
        
        this->regNum = regNum;
        this->name = name;
        this->surname = surname;
        this->year = year;
        this->section = section;
        this->grades = grades;
    }

    void getStudentData() {

            cout << "Name: ";
            cin >> this->name;
            cout << "Surname: ";
            cin >> this->surname;
            cout << "Year: ";
            cin >> this->year;
            cout << "Section: ";
            cin >> this->section;
    }

    void regNumIncrease() {

        regNum = regNum + 1;
    }

    void debugPrint1() {
        cout << this->name << this->surname << this->year << this->section;
    }

};

int main() {

    vector<student> students;

    student registeringStudent;

    cout << "Insert student data\n";

    registeringStudent.getStudentData();

    students.push_back(registeringStudent);

    students.at(0).debugPrint1();


}

/*
void getStudentData() {
        cout << "Name: ";
        cin >> this->name;
        cout << "Surname: ";
        cin >> this->surname;
        cout << "Year: ";
        cin >> this->year;
        cout << "Branch: ";
        cin >> this->branch;
    }
*/

// cout << "== STUDENTS' REGISTER ==\nPlease choose an option:\nA - Register a new student\nB - Register grade\nC - View a student's details\nD - View a class' students\nE - View the best student's details\nX - Exit\n";