#include <iostream>
using namespace std;

int primonum, secondonum, somma;
char risposta;

int main() {
    cout << "Questo programma calcola la somma di due numeri interi." << endl;
    do {
        cout << endl << "Inserisci il primo numero:" << endl;
        cin >> primonum;
        cout << "Inserisci il secondo numero:" << endl;
        cin >> secondonum;
        somma = primonum + secondonum;
        cout << endl
             << "La somma dei due numeri e': " << endl
             << "    " << primonum << " + " << secondonum << " = " << somma
             << endl
             << endl;
        cout << "Vuoi continuare? <s/n>" << endl;
        cin >> risposta;
    } while (risposta == 's' || risposta == 'S');
    cout << endl << "Arrivederci!" << endl;
    return 0;
}

