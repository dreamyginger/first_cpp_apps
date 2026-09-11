/*
MEMORIZZARE ALL'INTERNO DI UNA VARIABILE X IL VALORE DI 50
CALCOLARE IL DOPPIO DI X E MEMORIZZARLO NELLA VARIABILE Y
CALCOLARE IL TRIPLO DI Y E MEMORIZZARLO NELLA VARIABILE Z
CALCOLARE IL 10% DI Z E METTERLO NELLA VARIABILE DIECIPERC
STAMPARE IN OUTPUT TUTTI I VALORI CALCOLATI CON APPOSITE FRASI
"il doppio di x --> NUM"
"il triplo di y --> NUM"
"il 10% di z --> NUM"
*/

#include <iostream>
using namespace std;

int x = 50;
int y = x * 2;
int z = y * 3;
int dieciperc =  z / 10;

int main() {
    cout << "Il doppio di x -->" << y;
    cout << "Il triplo di y -->" << z;
    cout << "Il 10% di z -->" << dieciperc;
}