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
// 1. Task B, C - input = 0 gives a ghost student
// 3. Make a func or something to get main() input from lowercase to uppercase

#include <iostream>
#include <vector>
using namespace std;

struct students {

    public:
    int regNum;
    string name;
    string surname;
    char year;
    char section;
    string class_room;
    vector<float> grades;

    void (*getStudentDataMAIN) (struct students *, int);
    void (*detailsPrintMAIN) (struct students *, int);
    string (*getStudentFullNameMAIN) (struct students *, int);
    void (*detailsClassPrintMAIN) (struct students *, int);

};

students studentSelect[10]; // MAX 10 STUDENTS

// FUNCTIONS

void getStudentData(struct students *studentSelect, int i) {

    string namePlaceholder;
    string surnamePlaceholder;
    char sectionPlaceholder;

    cout << "Name: ";
    cin >> namePlaceholder;

    if (islower(namePlaceholder[0])) {
        namePlaceholder[0] = toupper(namePlaceholder[0]);

    } 
    studentSelect[i].name = namePlaceholder;

    cout << "Surname: ";
    cin >> surnamePlaceholder;
    
    if (islower(surnamePlaceholder[0])) {
        surnamePlaceholder[0] = toupper(surnamePlaceholder[0]);

    } 
    studentSelect[i].surname = surnamePlaceholder;
    
    cout << "Year: ";
    cin >> studentSelect[i].year;
    cout << "Section: ";
    cin >> sectionPlaceholder;
    
    if (islower(sectionPlaceholder)) {
        sectionPlaceholder = toupper(sectionPlaceholder);

    } 
    studentSelect[i].section = sectionPlaceholder;

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

void detailsClassPrint(struct students *studentSelect, int i) {

    cout << studentSelect[i].class_room << "found";
}

int main() {
    
    int i;
    int registeredStudentNum = 0; // Set different value for debug
    // defining functions
    studentSelect[i].getStudentDataMAIN = getStudentData;
    studentSelect[i].detailsPrintMAIN = detailsPrint;
    studentSelect[i].getStudentFullNameMAIN = getStudentFullName;
    studentSelect[i].detailsClassPrintMAIN = detailsClassPrint;

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

                studentSelect[i].class_room += studentSelect[i].year;
                studentSelect[i].class_room += studentSelect[i].section;

                cout << "\nSTUDENT '" << getStudentFullName(studentSelect, i) << "' HAS BEEN REGISTERED SUCCESSFULLY.\n";

                cout << studentSelect[i].class_room; // DEBUG

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
            bool regNumFound = false;

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
            bool regNumFound = false;
                    
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

        // D. Print details about every student of a class;

        // APPROACH:
        // 1. Turn section char from lowercase to uppercase
        // 2. Get existing class
        // 3. print studentsssss

            classAsk:            
            string inputClass;
            bool classFound = false;
                    
            cout << "== CLASS INFO SYSTEM ==\nPlease insert a valid class: "; 
            cin >> inputClass;

            if (islower(inputClass[1])) { // If input is in lowercase, turn it into caps
                inputClass[1] = toupper(inputClass[1]);

            }

            for (i = 0; i < registeredStudentNum; ++i) { // RESEARCH SYSTEM
                
                if (inputClass == studentSelect[i].class_room) { // RESEARCH SYSTEM WHEN FOUND

                    classFound = true;

                    detailsClassPrint(studentSelect, i);

                } else if (!classFound) {

                    goto classAsk;
                }
            }

            goto programstart;

        } else if (inputAsk == input[8] || inputAsk == input[9]) { // - PRINT STUDENT W/ BEST AVERAGE (E)

            cout << "You pressed E\n";

            goto programstart;

        } else if (inputAsk == input[10] || inputAsk == input[11]) { // - END PROGRAM (X)

            return 0;

        }
    }

}