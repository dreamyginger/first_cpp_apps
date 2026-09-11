/*
INPUT DI DUE DATI:
- PREZZO DI UN OGGETTO
- QUANTITA` DI OGGETTI ACQUISTATA
CALCOLARE IL COSTO TOTALE DA PAGARE
MOSTRARLO IN OUTPUT CON IL SEG. MESSAGGIO:
"Prezzo dell'oggetto: PREZZO€"
"Numero oggetti: NUM"
"Totale: TOT€"
*/

#include <iostream>
using namespace std;

int main() {
    int PREZZO;
    cout << "Prezzo dell'oggetto? ";
    cin >> PREZZO;
    int QTY;
    cout << "Quantita` degli oggetti da acquistare? ";
    cin >> QTY;

    int TOT = PREZZO * QTY;

    cout << "Prezzo dell'oggetto: " << PREZZO << "€ \n";
    cout << "Quantita` degli oggetti: " << QTY << "\n";
    cout << "Totale: " << TOT<< "€ \n";
}