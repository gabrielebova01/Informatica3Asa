#include <iostream>
using namespace std;

void CaricaMese(string Gen[]);
void StampaMese(string Gen[]);
void CercaGiorno(string Gen[]);

int main() {
    string Gennaio[31];
    CaricaMese(Gennaio);
    char risp;
    cout << "Calendario del mese di gennaio." << endl;
    do {
        cout << endl
             << "Premi <s> per visualizzare il mese, <r> per cercare un giorno "
                "o un altro tasto per uscire."
             << endl;
        cin >> risp;
        if (risp == 's' || risp == 'S') {
            StampaMese(Gennaio);
        }
        if (risp == 'r' || risp == 'R') {
            CercaGiorno(Gennaio);
        }
    } while (risp == 's' || risp == 'S' || risp == 'r' || risp == 'R');
    return 0;
}

void CaricaMese(string Gen[]) {
    Gen[0] = "Lunedi'";
    Gen[1] = "Martedi'";
    Gen[2] = "Mercoledi'";
    Gen[3] = "Giovedi'";
    Gen[4] = "Venerdi'";
    Gen[5] = "Sabato";
    Gen[6] = "Domenica";
    for (int Incremento = 0; Incremento < 7; Incremento++) {
        for (int Giorno = 7 + Incremento; Giorno < 31; Giorno = Giorno + 7) {
            Gen[Giorno] = Gen[Incremento];
        }
    }
}

void StampaMese(string Gen[]) {
    cout << endl << "Il mese di gennaio 2018 e':" << endl;
    for (int Giorno = 0; Giorno < 31; Giorno++) {
        cout << Gen[Giorno] << " " << Giorno + 1 << endl;
    }
}

void CercaGiorno(string Gen[]) {
    int ricerca;
    cout << endl << "Inserisci il numero del giorno che vuoi cercare:" << endl;
    cin >> ricerca;
    cout << "Il giorno " << ricerca << " e' " << Gen[ricerca - 1] << "."
         << endl;
}

