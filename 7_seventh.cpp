#include <iostream>
using namespace std;

int main() {
    int user_age;
    char student_check;
    bool student = false;
    bool pensionato = false;
    char tessera_check;
    bool tessera = false;
    int mesi;
    double costo_mensile = 40.5;
    double costo_finale;

    cout << "Inserire la propria età: ";
    cin >> user_age;


    student_checker:
    cout << "Sei uno studente? [Y/N] ";
    cin >> student_check;

    if (student_check == 'y' || student_check == 'Y') {
        student = true;
    }
    else if (student_check == 'n' || student_check == 'N' ) {
        student = false;
    }
    else {
        goto student_checker;
    }


    tessera_checker:
    cout << "Possiedi la tessera di associazione? [Y/N] ";
    cin >> tessera_check;

    if (tessera_check == 'y' || tessera_check == 'Y') {
        tessera = true;
    }
    else if (tessera_check == 'n' || tessera_check == 'N') {
        tessera = false;
    }
    else {
        goto tessera_checker;
    }


    cout << "Inserire il numero di mesi per cui vuoi iscriverti: ";
    cin >> mesi; /*rendere int solo in cifre*/


    if (student) {
        costo_finale = mesi * costo_mensile;
        costo_finale = costo_finale - (costo_finale * 20 / 100);

    }
    else if (user_age >= 65) {
        costo_finale = mesi * costo_mensile;
        costo_finale = costo_finale - (costo_finale * 15 / 100);

    }
    else {
        costo_finale = mesi * costo_mensile;
    }


    if (mesi >= 6) {
        costo_finale = costo_finale - (costo_finale / 10);

    }
    

    costo_mensile = costo_finale / mesi;
    
    if (student) {
        cout << "Studente: sì\nPensionato: no";
    }
    else if (pensionato) {
        cout << "Studente: no\nPensionato: sì";
    }
    else {
        cout << "Studente: no\nPensionato: no";
    }
    
    cout << "\n";

    if (tessera) {
        cout << "In possesso di tessera di associazione: sì";
    }
    else {
        cout << "In possesso di tessera di associazione: no";
    }

    cout << "\n";
    cout << "Mesi d'iscrizione: " << mesi << "\n";
    cout << "Costo mensile: " << costo_mensile << "\n";
    cout << "Costo totale: " << costo_finale;
    /*calcolare costo mensile*/
    /*calcolare costo utente totale*/

    /*STAMPARE:
    - studente y/n
    - pensionato y/n
    - tessera y/n
    - mesi NUM
    - prezzo finale abb mensil
    - totale
    */
}