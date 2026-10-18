/*
CREARE UNA STRUTTURA CHE POSSA CONTENERE I DATI DI UNO STUDENTE:
MATRICOLA (INT), NOME (STR), COGNOME (STR),
ANNO (INT), SEZIONE (CHAR o STR), INDIRIZZO (STR),
ARRAY DI VOTI (FLOAT).

SUCCESSIVAMENTE SVILUPPARE UN PROGRAMMA CHE DICHIARI UN ARRAY
DI STUDENTI E SUCCESSIVAMENTE
1. INSERISCA I DATI DI 3 STUDENTI DENTRO L'ARRAY
2. CHIEDA ALL'UTENTE UNA MATRICOLA E INSERISCA n VOTI (inseriti
dall'utente) DENTRO LO STUDENTE CON QUELLA MATRICOLA (testarlo
in modo da inserire una matricola presente nell'array)
3. STAMPI I DETTAGLI DI TUTTI GLI STUDENTI (compresi i 5 voti)
4. ORDINARE L'ARRAY TRAMITE SELECTION SORT IN ORDINE ALFABETICO
PER COGNOME
*/

#include <iostream>
using namespace std;

int main() {
    int matricola[3][1];
    string anagrafe[3][2];
    int anno[3][1];
    char sezione[3][1];
    string indirizzo[3][1];
    int votoAsk;
    float voti[3][5];
    bool studente1 = false;
    bool studente2 = false;
    bool studente3 = false;
    int studenteSelect = 1;
    string ordinale[3] = {"PRIMO", "SECONDO", "TERZO"};
    string ordinaleTrue;
    int ordinaleNum;

    ordinaleNum = 0; 
    ordinaleTrue = ordinale[ordinaleNum];

    richiesta_dati_studente:
    cout << "== DATI DEL " << ordinaleTrue << " STUDENTE ==\nNome: ";
    cin >> anagrafe[ordinaleNum][1];
    cout << "== DATI DEL " << ordinaleTrue << " STUDENTE == \nCognome: ";
    cin >> anagrafe[ordinaleNum][2];
    cout << "== DATI DEL " << ordinaleTrue << " STUDENTE == \nMatricola: ";
    cin >> matricola[ordinaleNum][1];

    cout << "== DATI DEL " << ordinaleTrue << " STUDENTE == \nQuanti voti si vogliono registrare? (Inserire un numero da 1 a 5)\n";
    cin >> votoAsk;

    if (votoAsk == 1) {
        cout << "== DATI DEL " << ordinaleTrue << " STUDENTE == \nInserire voto: ";
        cin >> voti[ordinaleNum][0];
    }
    else if (votoAsk >= 2) {
        cout << "== DATI DEL " << ordinaleTrue << " STUDENTE == \nInserire primo voto: ";
        cin >> voti[ordinaleNum][0];
        cout << "== DATI DEL " << ordinaleTrue << " STUDENTE == \nInserire secondo voto: ";
        cin >> voti[ordinaleNum][1];
    } if (votoAsk >= 3) {
        cout << "== DATI DEL " << ordinaleTrue << " STUDENTE == \nInserire terzo voto: ";
        cin >> voti[ordinaleNum][2]; 
    } if (votoAsk >= 4) {
        cout << "== DATI DEL " << ordinaleTrue << " STUDENTE == \nInserire quarto voto: ";
        cin >> voti[ordinaleNum][3]; 
    } if (votoAsk == 5) {
        cout << "== DATI DEL " << ordinaleTrue << " STUDENTE == \nInserire quinto voto: ";
        cin >> voti[ordinaleNum][4]; 
    }

    studenteSelect = studenteSelect + 1;
    ordinaleNum = ordinaleNum + 1;
    ordinaleTrue = ordinale[ordinaleNum];
    
    goto richiesta_dati_studente; /*Per il 2ndo studente*/
    goto richiesta_dati_studente; /*Per il 3zo studente*/

}



/*
cosa 1 (1)

cosa 2 (1, 2)
cosa 3 (1, 2, 3)


1, 2 sempre. 3 solo se cosa 3
*/