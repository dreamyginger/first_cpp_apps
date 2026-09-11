/*
PRENDERE IN INGRESSO TRE VOTI:
- PRATICO
- ORALE
- SCRITTO

CALCOLARE LA MEDIA

RESTITUIRE IN OUTPUT:
- VOTI INSERITI
- MEDIA DEI VOTI
*/

#include <iostream>
using namespace std;

int main() {
    int votoP; int votoO; int votoS;

    cout << "Inserisci il voto pratico: ";
    cin >> votoP;
    cout << "Inserisci il voto orale: ";
    cin >> votoO;
    cout << "Inserisci il voto scritto: ";
    cin >> votoS;

    int MEDIA = (votoP + votoO + votoS) / 3;

    cout << "VOTI INSERITI \nPratico: " << votoP << "\nOrale: " << votoO << "\nScritto: " << votoS << "\nMedia dei voti:" << MEDIA;
}