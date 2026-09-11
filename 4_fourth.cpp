/*
QUANTE UOVA HA ACQUISTATO L'UTENTE
PREZZO UNITARIO DEL SINGOLO UOVO: 0.5EUR
SE L'UTENTE NE ACQUISTA ALMENO 10, IL PREZZO UNITARIO DIVENTA 0.3EUR
MOSTRARE IN OUTPUT TUTTI I DATI DEL PROBLEMA:
- Numero uova acquistate
- Prezzo unitario
- Totale da pagare
*/

#include <iostream>
using namespace std;

int main() {
    int EggNUM;
    int EggPRICE;
    double Tariff_05 = 0.50;
    double Tariff_03 = 0.30;
    double Tariff_USE;

    cout << "Quante uova si intende acquistare? ";
    cin >> EggNUM;
    
    if (EggNUM < 10) {
        EggPRICE = EggNUM * Tariff_05;
        Tariff_USE = Tariff_05;
    }
    else {
        EggPRICE = EggNUM * Tariff_03;
        Tariff_USE = Tariff_03;
    }

    cout << "Numero di uova acquistate: " << EggNUM << "\nPrezzo unitario: " << Tariff_USE << "€/uovo\nTotale da pagare: " << EggPRICE << "€";
}