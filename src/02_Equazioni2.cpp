#include <cmath>
#include <iostream>
using namespace std;

void RisolviPrimoGrado(float c2, float c3) {
    if ((c2 == 0) && (c3 == 0)) {
        cout << "L'equazione e' indeterminata." << endl;
    } else {
        if (c2 == 0) {
            cout << "L'equazione e' impossibile." << endl;
        } else {
            cout << "x = " << -c3 / c2 << endl;
        }
    }
}  // RisolviPrimoGrado

float CalcolaDelta(float c1, float c2, float c3) {
    return c2 * c2 - 4 * c1 * c3;
}  // CalcolaDelta

void ScriviSoluzioni(float c1, float c2, float c3) {
    float delta;   // discriminante
    float x1, x2;  // soluzioni
    delta = CalcolaDelta(c1, c2, c3);
    cout << "Delta = " << delta << endl;
    if (delta < 0) {
        cout << "L'equazione non ha soluzioni reali." << endl;
    } else {
        if (delta == 0) {
            x1 = -c2 / (2 * c1);
            cout << "x1 = x2 = " << x1 << endl;
        } else {
            x1 = (-c2 - sqrt(delta)) / (2 * c1);
            x2 = (-c2 + sqrt(delta)) / (2 * c1);
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }
}  // ScriviSoluzioni

// funzione principale
int main() {
    float a, b, c;  // coefficienti equazione
    char risposta;
    cout << "Questo programma risolve equazioni di secondo grado." << endl;
    do {
        cout << endl
             << "Inserisci il coefficiente del termine di secondo grado:"
             << endl;
        cin >> a;
        cout << "Inserisci il coefficiente del termine di primo grado:" << endl;
        cin >> b;
        cout << "Inserisci il termine noto:" << endl;
        cin >> c;
        cout << endl;
        if (a != 0) {
            ScriviSoluzioni(a, b, c);
        } else {
            RisolviPrimoGrado(b, c);
        }
        cout << endl << "Vuoi continuare? <s/n>" << endl;
        cin >> risposta;
    } while (risposta == 'S' || risposta == 's');
    return 0;
}

