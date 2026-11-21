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

// TO-DO:
// 1. Task B, C - input = 0 gives a ghost student;
// 2. Turn owercase to uppercase when taking section input;

#include <iostream>
#include <vector>
using namespace std;

struct students {

    public:
    int regNum;
    string name;
    string surname;
    int year;
    char section;
    vector<float> grades;

    void (*getStudentDataMAIN) (struct students *, int);
    void (*detailsPrintMAIN) (struct students *, int);
    string (*getStudentFullNameMAIN) (struct students *, int);

};

students studentSelect[10]; // MAX 10 STUDENTS

// FUNCTIONS

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

void detailsPrint(struct students *studentSelect, int i) {
    
    cout << "\n== STUDENT INFO ==";
    cout << "\nName: " << studentSelect[i].name;
    cout << "\nSurname: " << studentSelect[i].surname;
    cout << "\nClass: " << studentSelect[i].year << studentSelect[i].section;
    cout << "\nRegistration number: " << studentSelect[i].regNum << "\n";
}

string getStudentFullName(struct students *studentSelect, int i) {

    return studentSelect[i].name + " " + studentSelect[i].surname;
}

int main() {
    
    int i;
    int registeredStudentNum = 10;
    // defining functions
    studentSelect[i].getStudentDataMAIN = getStudentData;
    studentSelect[i].detailsPrintMAIN = detailsPrint;
    studentSelect[i].getStudentFullNameMAIN = getStudentFullName;

    while (true) {

        programstart:
        cout << "\n== STUDENTS' REGISTER ==\nPlease choose an option:\nA - Register a new student\nB - Register grade\nC - View a student's details\nD - View a class' students\nE - View the best student's details\nX - Exit\n";
        string input[12] = {"A", "a", "B", "b", "C", "c", "D", "d", "E", "e", "X", "x"};
        string inputAsk;
        cin >> inputAsk;

        if (inputAsk == input[0] || inputAsk == input[1]) { // "A" or "a" - INSERT STUDENT DATA (A)
        
            for (int i = 0; i < 1; ++i) {
                
                cout << "== STUDENT REGISTRATION SYSTEM - REGISTERING STUDENT NO. " << i + 1 << " ==\n";

                getStudentData(studentSelect, i);

                cout << "\nSTUDENT '" << getStudentFullName(studentSelect, i) << "' HAS BEEN REGISTERED SUCCESSFULLY.\n";

                ++registeredStudentNum;

            }

            goto programstart;

        } else if (inputAsk == input[2] || inputAsk == input[3]) { // - INSERT STUDENT GRADES (B)

        // B. Insert a grade to a reg-num-identified student;

        // APPROACH:
        // 1. Ask for regnum until a valid one is entered,
        // 2. Ask grade amount "n" the user wants to register,
        // 3. Insert n grades to the student
            
            regNumAskGrade:            
            int inputREGNUM;
            bool regNumFound = false; // Results unused if this line doesn't exist, for some reason..

            cout << "== STUDENT GRADE SYSTEM ==\nPlease insert a valid registration number: "; // !! Digiting 0 provides an unregistered student VALID input!!!
            cin >> inputREGNUM;

            for (i = 0; i < registeredStudentNum; ++i) { // RESEARCH SYSTEM
                
                if (inputREGNUM == studentSelect[i].regNum) { // RESEARCH SYSTEM WHEN FOUND

                    regNumFound = true;
                    int gradeNAsk = 0;

                    cout << "Please insert how many grades you'd like to register: ";
                    cin >> gradeNAsk;

                    for (int j = 0; j < gradeNAsk; ++j) {

                        float grade;

                        cout << "Insert grade no." << (j + 1) << ": ";
                        cin >> grade;

                        studentSelect[i].grades.push_back(grade);

                    }

                } else if (!regNumFound) {

                    goto regNumAskGrade;
                }

            }
            
            if (regNumFound = true) {

                cout << "\nGRADES FOR STUDENT '" << getStudentFullName(studentSelect, i) << "' HAVE BEEN REGISTERED SUCCESSFULLY.\n";

                goto programstart;

            }            

        } else if (inputAsk == input[4] || inputAsk == input[5]) { // - PRINT STUDENT DETAILS (C)

        // C. Print details (name, surname, year + branch and grades' average) of a student identified with a registration number;

        // APPROACH:
        // 1. Paste previous research system
        // 2. Create a (new) function for printing details (like previously done for debugprint1)
        // 3. Change research system with needed data

            regNumAskInfo:            
            int inputREGNUM;
            bool regNumFound = false; // Results unused if this line doesn't exist, for some reason..
                    
            cout << "== STUDENT INFO SYSTEM ==\nPlease insert a valid registration number: "; // !! Digiting 0 provides an unregistered student VALID input!!!
            cin >> inputREGNUM;

            for (i = 0; i < registeredStudentNum; ++i) { // RESEARCH SYSTEM
                
                if (inputREGNUM == studentSelect[i].regNum) { // RESEARCH SYSTEM WHEN FOUND

                    regNumFound = true;

                    detailsPrint(studentSelect, i);

                } else if (!regNumFound) {

                    goto regNumAskInfo;
                }
            }

            goto programstart;

        } else if (inputAsk == input[6] || inputAsk == input[7]) { // - PRINT DETAILS FOR CLASS (D)

            cout << "You pressed D\n";

            goto programstart;

        } else if (inputAsk == input[8] || inputAsk == input[9]) { // - PRINT STUDENT W/ BEST AVERAGE (E)

            cout << "You pressed E\n";

            goto programstart;

        } else if (inputAsk == input[10] || inputAsk == input[11]) { // - END PROGRAM (X)

            return 0;

        }
    }

}