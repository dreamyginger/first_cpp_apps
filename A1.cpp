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
#include <vector>
using namespace std;

class studente {

    private: //solo classe studente

    int matricola;
    string nome;
    string cognome;
    int anno;
    char sezione;
    string indirizzo;
    vector<float> voti;

    public:
    //costruttore vvv
    studente() {

    }

    studente(int matricola, string nome, string cognome, int anno, char sezione, string indirizzo, vector<float> voti) {
        this->matricola = matricola; //"la matricola di questa classe e` uguale alla matricola che creo quando creo lo studente"
        this->nome = nome;
        this->cognome = cognome;
        this->anno = anno;
        this->sezione = sezione;
        this->indirizzo = indirizzo;
        this->voti = voti;   
    }

    int getMatricola() {
        
        return this->matricola;
    }

    string getCognome() {

        return this->cognome;
    }

    string getNomeCompleto() {

        return this->nome + " " + this->cognome;
    }

    void inserisciDati() {

        cout << "Nome: ";
        cin >> this->nome;
        cout << "Cognome: ";
        cin >> this->cognome;
        cout << "Numero di matricola: ";
        cin >> this->matricola;
        cout << "Anno: ";
        cin >> this->anno;
        cout << "Sezione: ";
        cin >> this->sezione;
        cout << "Indirizzo: ";
        cin >> this->indirizzo;

        int votoAsk = 0;

        cout << "Quanti voti si vogliono registrare? (Inserire un numero da 1 a 5): ";
        cin >> votoAsk;
    
        for (int i = 0; 1 <= votoAsk; ++i) {
            
            float voto;

            cout << "Inserire il voto n. " << (i+1) << " ";
            cin >> voto;

            this->voti.push_back(voto);
        }
    }

    void stampaDati() {

        cout << "Nome: " << this->getNomeCompleto();
        cout << "\nNumero di matricola: " << this->matricola << "\nAnno: " << this->anno << "\nSezione: " << this->sezione << "\nIndirizzo: " << this->indirizzo;

        for(int i =0; i< this->voti.size(); ++i) {

            cout << "\nVoto n. " << (i + 1) << ": " << voti.at(i);
        }
    }


};

void selectionSort(vector<studente> &studenti) {

    for(int i = 0; i < studenti.size() - 1; ++i) {

        int posMin = i;

        for(int j = i + 1; j < studenti.size(); ++j) {

            if(studenti.at(j).getCognome() < studenti.at(posMin).getCognome()) {
                
                posMin = j;
            }
        }

        swap(studenti.at(i), studenti.at(posMin));
    }
}

int main() {

    vector<studente> studenti; 

    for(int i = 0; i < 3; ++i) {

        studente studente_da_registrare;

        cout << "\n== INSERIRE I DATI DELLO STUDENTE n. " << (i + 1) << " ==\n";
        
        studente_da_registrare.inserisciDati();

        studenti.push_back(studente_da_registrare);
    }

    for(int i = 0; 1 < studenti.size(); ++i) {

        cout << "\n== DATI DELLO STUDENTE n. " << (i + 1) << "==";

        studenti.at(i).stampaDati();
    }
    
    selectionSort(studenti);
}

/*

    int matricola[3];
    string anagrafe[3][2];
    int anno[3];
    char sezione[3];
    string indirizzo[3];
    int votoAsk;
    float voti[3][4];
    string ordinale[3] = {"PRIMO", "SECONDO", "TERZO"};
    string ordinaleTrue;
    int ordinaleNum;

    for (ordinaleNum = 0, ordinaleTrue = ordinale[ordinaleNum]; ordinaleNum <= 2; ordinaleNum = ordinaleNum + 1, ordinaleTrue = ordinale[ordinaleNum]) {
        cout << "\n== DATI DEL " << ordinaleTrue << " STUDENTE ==\nNome: ";
        cin >> anagrafe[ordinaleNum][1];
        cout << "Cognome: ";
        cin >> anagrafe[ordinaleNum][2];
        cout << "Numero di matricola: ";
        cin >> matricola[ordinaleNum];
        cout << "Anno: ";
        cin >> anno[ordinaleNum];
        cout << "Sezione: ";
        cin >> sezione[ordinaleNum];
        cout << "Indirizzo: ";
        cin >> indirizzo[ordinaleNum];

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
    }

    // FOR LOOP PER OUTPUT STUDENTI
    for (ordinaleNum = 0, ordinaleTrue = ordinale[ordinaleNum]; ordinaleNum <= 2; ordinaleNum = ordinaleNum + 1, ordinaleTrue = ordinale[ordinaleNum]) {

        cout << "== DATI DEL " << ordinaleTrue << " STUDENTE ==\nNome: " << anagrafe[ordinaleNum][1] << "\nCognome: " << anagrafe [ordinaleNum][2];
        cout << "\nNumero di matricola: " << matricola[ordinaleNum] << "\nClasse: " << anno[ordinaleNum] << sezione[ordinaleNum] << "\nIndirizzo: " << indirizzo[ordinaleNum];
    
    }
    
    // SELECTION SORT vvv
    
    int anagrafeVAL = sizeof(anagrafe) / sizeof(anagrafe[0][1]); // GET ARRAY SIZE
    int pos1; // primo placeholder per il confronto
    int pos2; // secondo ^^

    for (pos1 = 0; pos1 < anagrafeVAL - 1; ++pos1) { // anagrafeval -1 perché ha indice da 0 a 2 per 3 elementi
        
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
    
} */
