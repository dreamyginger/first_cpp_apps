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
    string ordinale[3] = {"PRIMO", "SECONDO", "TERZO"};
    string ordinaleTrue;
    int ordinaleNum;

    ordinaleNum = 0; 
    ordinaleTrue = ordinale[ordinaleNum];

    richiesta_dati_studente:
    cout << "\n== DATI DEL " << ordinaleTrue << " STUDENTE ==\nNome: ";
    cin >> anagrafe[ordinaleNum][1];
    cout << "Cognome: ";
    cin >> anagrafe[ordinaleNum][2];
    cout << "Numero di matricola: ";
    cin >> matricola[ordinaleNum][1];
    cout << "Anno: ";
    cin >> anno[ordinaleNum][1];
    cout << "Sezione: ";
    cin >> sezione[ordinaleNum][1];
    cout << "Indirizzo: ";
    cin >> indirizzo[ordinaleNum][1];

    cout << "Quanti voti si vogliono registrare? (Inserire un numero da 1 a 5): ";
    cin >> votoAsk;

    if (votoAsk == 1) {
        cout << "Inserire voto: ";
        cin >> voti[ordinaleNum][0];
    }
    else if (votoAsk >= 2) {
        cout << "Inserire primo voto: ";
        cin >> voti[ordinaleNum][0];
        cout << "Inserire secondo voto: ";
        cin >> voti[ordinaleNum][1];
    } if (votoAsk >= 3) {
        cout << "Inserire terzo voto: ";
        cin >> voti[ordinaleNum][2]; 
    } if (votoAsk >= 4) {
        cout << "Inserire quarto voto: ";
        cin >> voti[ordinaleNum][3]; 
    } if (votoAsk == 5) {
        cout << "Inserire quinto voto: ";
        cin >> voti[ordinaleNum][4]; 
    }

    ordinaleNum = ordinaleNum + 1;
    ordinaleTrue = ordinale[ordinaleNum];
    
    goto richiesta_dati_studente; /*Per il 2ndo studente*/
    goto richiesta_dati_studente; /*Per il 3zo studente*/

    /* OUTPUT */
    ordinaleNum = 0;
    ordinaleTrue = ordinale[ordinaleNum];

    dati_studenteOUT:
    cout << "== DATI DEL " << ordinaleTrue << " STUDENTE ==\nNome: " << anagrafe[ordinaleNum][1] << "\nCognome: " << anagrafe [ordinaleNum][2];
    cout << "\nNumero di matricola: " << matricola[ordinaleNum][1] << "\nClasse: " << anno[ordinaleNum][1] << sezione[ordinaleNum][1] << "\nIndirizzo: " << indirizzo[ordinaleNum][1];

    ordinaleNum = ordinaleNum + 1;
    ordinaleTrue = ordinale[ordinaleNum];

    goto dati_studenteOUT; // stud 2
    goto dati_studenteOUT; // stud 3

    // SELECTION SORT vvv
    
    int anagrafeVAL = sizeof(anagrafe) / sizeof(anagrafe[0][1]); // GET ARRAY SIZE
    int pos1; // primo placeholder per il confronto
    int pos2; // secondo ^^

    for (pos1 = 0; pos1 < anagrafeVAL - 1; ++pos1) { /* anagrafeval -1 perché ha indice da 0 a 2 per 3 elementi */
        
        ordinaleNum = pos1;
        
        for (pos2 = pos1 + 1; pos2 < ordinaleNum; ++pos2) {
            
            if (anagrafe[pos2][2] < anagrafe[ordinaleNum][2]) { // la selezione avviene per COGNOME
            
            ordinaleNum = pos2;
            }
        }

        swap(anagrafe[pos1][2], anagrafe[ordinaleNum][2]);
        swap(anagrafe[pos1][1], anagrafe[ordinaleNum][1]); // dai per favore mantieni i numeri xoxo

    }

    // FINE SELECTION SORT NOMI > output elenco in ordine alfabetico 

    cout << "== ELENCO DEGLI STUDENTI ==\n1. " << anagrafe[0][2] << " " << anagrafe[0][1] << "\n2. " << anagrafe[1][2] << " " << anagrafe[1][1] << "\n3. " << anagrafe[2][2] << " " << anagrafe[2][1];

}