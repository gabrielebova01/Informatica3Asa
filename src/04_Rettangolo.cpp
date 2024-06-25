#include <cmath>
#include <iostream>
using namespace std;

class Rettangolo {
    // attributi
    double base, altezza;

   public:
    // metodi
    void Assegna(double, double);
    double Area();
    double Perimetro();
    double Diagonale();
};

void Rettangolo::Assegna(double b, double h) {
    base = b;
    altezza = h;
}

double Rettangolo::Area() { return base * altezza; }

double Rettangolo::Perimetro() { return 2 * (base + altezza); }

double Rettangolo::Diagonale() { return sqrt(base * base + altezza * altezza); }

int main() {
    Rettangolo tavolo;
    double b, h;
    char risposta;
    cout << "Questo programma calcola area, perimetro e diagonale di un "
            "oggetto tavolo di tipo Rettangolo."
         << endl;
    do {
        cout << endl << "Inserisci la lunghezza della base:" << endl;
        cin >> b;
        cout << "Inserisci la lunghezza dell'altezza:" << endl;
        cin >> h;
        tavolo.Assegna(b, h);
        cout << endl << "Area = " << tavolo.Area() << endl;
        cout << "Perimetro = " << tavolo.Perimetro() << endl;
        cout << "Diagonale = " << tavolo.Diagonale() << endl;
        cout << endl << "Vuoi continuare? <s/n>" << endl;
        cin >> risposta;
    } while (risposta == 's' || risposta == 'S');
    return 0;
}

