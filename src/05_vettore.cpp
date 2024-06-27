#include <iostream>
using namespace std;

const int MAX = 100;
// variabili globali
int n;      // numero da ricercare
int posto;  // posizione del primo numero trovato

// prototipi delle funzioni
int ChiediDimensione();
void CaricaVettore(int v[], int d);
void Stampa1(int v[], int d);
void Ordina(int v[], int d);
void Scambia(int& a, int& b);
void Stampa2(int v[], int d);
bool Trova(int v[], int d);

// funzione principale
int main() {
    int dim;        // dimensione indicata dall'utente
    int vett[MAX];  // vettore da ordinare e in cui cercare il numero
    bool trovato;   // indicatore se trovato
    char risp, risp2;
    cout << "Questo programma dispone in ordine crescente un massimo di " << MAX
         << " numeri interi e permette la ricerca nell'array." << endl;
    do {
        dim = ChiediDimensione();
        cout << "Inserisci i numeri da ordinare." << endl;
        CaricaVettore(vett, dim);
        cout << endl << "I numeri inseriti sono:" << endl;
        Stampa1(vett, dim);
        Ordina(vett, dim);
        cout << endl << "I numeri ordinati sono:" << endl;
        Stampa2(vett, dim);
        do {
            cout << endl << "Vuoi cercare un numero? <s/n>" << endl;
            cin >> risp2;
            if (risp2 == 's' || risp2 == 'S') {
                cout << endl << "Inserisci il numero da cercare:" << endl;
                cin >> n;
                trovato = Trova(vett, dim);
                if (trovato) {
                    cout << "Il numero " << n << " si trova alla posizione "
                         << posto + 1 << "." << endl;
                } else {
                    cout << "Il numero " << n << " non e' presente nel vettore."
                         << endl;
                }
            }
        } while (risp2 == 's' || risp2 == 'S');
        cout << endl
             << "Premi <s> per continuare o un altro tasto per uscire." << endl;
        cin >> risp;
    } while (risp == 's' || risp == 'S');
    return 0;
}

// sviluppo delle funzioni
// dimensione dell'array
int ChiediDimensione() {
    int d;
    do {
        cout << endl << "Quanti numeri vuoi ordinare?" << endl;
        cin >> d;
        if (d < 1 || d > MAX) {
            cout << "Numero non valido. Inserisci un numero compreso tra 1 e "
                 << MAX << " e riprova." << endl
                 << endl;
        }
    } while (d < 1 || d > MAX);
    return d;
}  // ChiediDimensione

// caricamento delle componenti
void CaricaVettore(int v[], int d) {
    for (int i = 0; i < d; i++) {
        cout << endl
             << "Inserisci il numero di posto " << i + 1 << ": " << endl;
        cin >> v[i];
    }
}  // CaricaVettore

void Stampa1(int v[], int d) {
    for (int i = 0; i < d - 1; i++) {
        cout << v[i] << " | ";
    }
    cout << v[d - 1] << endl;
}

void Ordina(int v[], int d) {
    for (int i = 0; i < d - 1; i++) {
        for (int j = i + 1; j < d; j++) {
            if (v[i] > v[j]) {
                Scambia(v[i], v[j]);
            }
        }
    }
}

void Scambia(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void Stampa2(int v[], int d) {
    for (int i = 0; i < d; i++) {
        cout << i + 1 << ": ";
        cout << v[i] << endl;
    }
}

// ricerca dell'elemento nell'array
bool Trova(int v[], int d) {
    bool s = false;
    posto = 0;
    do {
        if (v[posto] == n) {
            s = true;
        } else {
            posto++;
        }
    } while (posto < d && s == false);
    return s;
}  // Trova

