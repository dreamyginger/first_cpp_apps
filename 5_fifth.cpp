/*
PRENDERE IN INGRESSO 3 NUMERI INTERI TUTTI DIVERSI FRA LORO
CALCOLARE IL MASSIMO TRA I 3 NUMERI E SCRIVERE TUTTI I DATI IN OUTPUT:
"Primo numero: xxx"
"Secondo numero: YYY"
"Terzo numero: ZZZ"
"Massimo: MAX"
*/

#include <iostream>
using namespace std;

int main() {
    int x; int y; int z; int MaxNUM;
    cout << "Inserire il primo numero: ";
    cin >> x;
    y_choice:
    cout << "Inserire il secondo numero, diverso dal precedente: ";
    cin >> y;

    while (y == x) {
        goto y_choice;
    };
    
    z_choice:
    cout << "Inserire il terzo numero, diverso dai precedenti: ";
    cin >> z;

    while (z == y || z == x) {
        goto z_choice;
    }

    if (x > y && x > z) {
        x = MaxNUM;
    }
    else if (y > x && y > z) {
        y = MaxNUM;
    }
    else if (z > x && z > y) {
        z = MaxNUM;
    }
    else {
        cout << "Error";
    }

    cout << "Primo numero: " << x << "\nSecondo numero: " << y << "\nTerzo Numero: " << z << "\nMassimo: " << MaxNUM;
}