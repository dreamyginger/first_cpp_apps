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
    int x; int y; int z; int max;
    cout << "Inserire il primo numero: ";
    cin >> x;
    cout << "Inserire il secondo numero: ";
    cin >> y;
    cout << "Inserire il terzo numero: ";
    cin >> z;

    if (x > y, x > z) {
        x = max;
    }
    else if (y > x, y > z) {
        y = max;
    }
    else {
        z = max;
    }

    cout << "Primo numero: " << x << "\nSecondo numero: " << y << "\nTerzo Numero" << z << "\nMassimo:" << max;
}