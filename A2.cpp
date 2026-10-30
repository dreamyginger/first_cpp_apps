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

struct student {

    private:
    int regNum;
    string name;
    string surname;
    int year;
    int branch;
    vector<float> grade;

    public:
    student(int regNum, string name, string surname, int year, int branch, vector<float> grade) {
        this->regNum = regNum;
        this->name = name;
        this->surname = surname;
        this->year = year;
        this->branch = branch;
        this->grade = grade;
    }
    
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

    string getFullName() {
        return this->name + " " + this->surname; 
    }

    int assignRegNum() {
        return this->regNum = ++this->regNum;
    }

    void debugPrint() {

        cout << this->getFullName() << "\n";
        cout << this->assignRegNum();
        
    }

} registeringStudent;

int main() {

    for (int i = 0; i < 2; ++i) {
        
        registeringStudent.getStudentData();

        registeringStudent.debugPrint();
    }

};

// cout << "== STUDENTS' REGISTER ==\nPlease choose an option:\nA - Register a new student\nB - Register grade\nC - View a student's details\nD - View a class' students\nE - View the best student's details\nX - Exit\n";