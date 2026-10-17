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
    int matricola;
    string nome;
    string cognome;
    int anno;
    char sezione;
    string indirizzo;
    float voti[5];

    
    /* string studenteanagrafe[2] {nome, cognome}; */


    cout << "== DATI DEL PRIMO STUDENTE ==\nNome:";
    cin >> nome;
    cout << "== DATI DEL PRIMO STUDENTE == \nCognome:";
    cin >> cognome;

}