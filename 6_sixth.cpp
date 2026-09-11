/*
CHIEDERE ALL'UTENTE QUANTO HA SPESO AL SUPERMERCATO
SAPENDO CHE OGNI 15EUR DI SPESA C'E` UN BOLLINO REGALO, CALCOLARE QUANTI NE DEVE RICEVERE L'UTENTE
SE L'UTENTE SPENDE PIU` DI 50EUR, AL NUMERO TOTALE DI BOLLINI VENGONO REGALATI 2 ULTERIORI BOLLINI
STAMPARE IN OUTPUT:
"Spesa: X"
"Bollini: Y"
*/

#include <iostream>
using namespace std;

int main() {
    double spesa;
    int bollini;

    cout << "Inserire il totale della spesa in EUR: ";
    cin >> spesa;

    bollini = spesa / 15;
    if (spesa >= 50) {
        bollini = bollini + 2;
    }

    cout << "Spesa: " << spesa << "€\nBollini: " << bollini;
}