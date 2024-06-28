#include <iostream>
using namespace std;

void Ordina(int& x, int& y) {
    int temp;
    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }
}  // confronto ed eventuale scambio

// funzione principale
int main() {
    // input-output
    int a, b, c, d, e, f, g;
    int cont, numero;
    char risp;
    cout << "Questo programma dispone i numeri inseriti in ordine crescente."
         << endl;
    do {
        cont = 0;
        cout << endl
             << "Quanti numeri vuoi confrontare? Puoi confrontare massimo 7 "
                "numeri interi."
             << endl;
        cin >> numero;
        cout << endl << "Inserisci il primo numero:" << endl;
        cin >> a;
        cont = cont + 1;
        if (cont < numero) {
            cout << "Hai gia' inserito " << cont
                 << " numero, devi inserirne ancora " << numero - cont << "."
                 << endl
                 << endl
                 << "Inserisci il secondo numero:" << endl;
            cin >> b;
            cont = cont + 1;
            if (cont < numero) {
                cout << "Hai gia' inserito " << cont
                     << " numeri, devi inserirne ancora " << numero - cont
                     << "." << endl
                     << endl
                     << "Inserisci il terzo numero:" << endl;
                cin >> c;
                cont = cont + 1;
                if (cont < numero) {
                    cout << "Hai gia' inserito " << cont
                         << " numeri, devi inserirne ancora " << numero - cont
                         << "." << endl
                         << endl
                         << "Inserisci il quarto numero:" << endl;
                    cin >> d;
                    cont = cont + 1;
                    if (cont < numero) {
                        cout << "Hai gia' inserito " << cont
                             << " numeri, devi inserirne ancora "
                             << numero - cont << "." << endl
                             << endl
                             << "Inserisci il quinto numero:" << endl;
                        cin >> e;
                        cont = cont + 1;
                        if (cont < numero) {
                            cout << "Hai gia' inserito " << cont
                                 << " numeri, devi inserirne ancora "
                                 << numero - cont << "." << endl
                                 << endl
                                 << "Inserisci il sesto numero:" << endl;
                            cin >> f;
                            cont = cont + 1;
                            if (cont < numero) {
                                cout << "Hai gia' inserito " << cont
                                     << " numeri, devi inserirne ancora "
                                     << numero - cont << "." << endl
                                     << endl
                                     << "Inserisci il settimo numero:" << endl;
                                cin >> g;
                                cont = cont + 1;
                                cout << "Inserimento dei " << cont
                                     << " numeri completato." << endl
                                     << endl
                                     << "I " << cont
                                     << " numeri inseriti sono: " << a << ", "
                                     << b << ", " << c << ", " << d << ", " << e
                                     << ", " << f << ", " << g << "." << endl
                                     << endl;
                                Ordina(a, b);
                                Ordina(a, c);
                                Ordina(a, d);
                                Ordina(a, e);
                                Ordina(a, f);
                                Ordina(a, g);
                                Ordina(b, c);
                                Ordina(b, d);
                                Ordina(b, e);
                                Ordina(b, f);
                                Ordina(b, g);
                                Ordina(c, d);
                                Ordina(c, e);
                                Ordina(c, f);
                                Ordina(c, g);
                                Ordina(d, e);
                                Ordina(d, f);
                                Ordina(d, g);
                                Ordina(e, f);
                                Ordina(e, g);
                                Ordina(f, g);
                                cout << "I " << cont
                                     << " numeri ordinati sono: " << a << ", "
                                     << b << ", " << c << ", " << d << ", " << e
                                     << ", " << f << ", " << g << "." << endl;
                            } else {
                                cout << "Inserimento dei " << cont
                                     << " numeri completato." << endl
                                     << endl
                                     << "I " << cont
                                     << " numeri inseriti sono: " << a << ", "
                                     << b << ", " << c << ", " << d << ", " << e
                                     << ", " << f << "." << endl
                                     << endl;
                                Ordina(a, b);
                                Ordina(a, c);
                                Ordina(a, d);
                                Ordina(a, e);
                                Ordina(a, f);
                                Ordina(b, c);
                                Ordina(b, d);
                                Ordina(b, e);
                                Ordina(b, f);
                                Ordina(c, d);
                                Ordina(c, e);
                                Ordina(c, f);
                                Ordina(d, e);
                                Ordina(d, f);
                                Ordina(e, f);
                                cout << "I " << cont
                                     << " numeri ordinati sono: " << a << ", "
                                     << b << ", " << c << ", " << d << ", " << e
                                     << ", " << f << "." << endl;
                            }  // 6
                        } else {
                            cout << "Inserimento dei " << cont
                                 << " numeri completato." << endl
                                 << endl
                                 << "I " << cont
                                 << " numeri inseriti sono: " << a << ", " << b
                                 << ", " << c << ", " << d << ", " << e << "."
                                 << endl
                                 << endl;
                            Ordina(a, b);
                            Ordina(a, c);
                            Ordina(a, d);
                            Ordina(a, e);
                            Ordina(b, c);
                            Ordina(b, d);
                            Ordina(b, e);
                            Ordina(c, d);
                            Ordina(c, e);
                            Ordina(d, e);
                            cout << "I " << cont
                                 << " numeri ordinati sono: " << a << ", " << b
                                 << ", " << c << ", " << d << ", " << e << "."
                                 << endl;
                        }  // 5
                    } else {
                        cout << "Inserimento dei " << cont
                             << " numeri completato." << endl
                             << endl
                             << "I " << cont << " numeri inseriti sono: " << a
                             << ", " << b << ", " << c << ", " << d << "."
                             << endl
                             << endl;
                        Ordina(a, b);
                        Ordina(a, c);
                        Ordina(a, d);
                        Ordina(b, c);
                        Ordina(b, d);
                        Ordina(c, d);
                        cout << "I " << cont << " numeri ordinati sono: " << a
                             << ", " << b << ", " << c << ", " << d << "."
                             << endl;
                    }  // 4
                } else {
                    cout << "Inserimento dei " << cont << " numeri completato."
                         << endl
                         << endl
                         << "I " << cont << " numeri inseriti sono: " << a
                         << ", " << b << ", " << c << "." << endl
                         << endl;
                    Ordina(a, b);
                    Ordina(a, c);
                    Ordina(b, c);
                    cout << "I " << cont << " numeri ordinati sono: " << a
                         << ", " << b << ", " << c << "." << endl;
                }  // 3
            } else {
                cout << "Inserimento dei " << cont << " numeri completato."
                     << endl
                     << endl
                     << "I " << cont << " numeri inseriti sono: " << a << ", "
                     << b << "." << endl
                     << endl;
                Ordina(a, b);
                cout << "I " << cont << " numeri ordinati sono: " << a << ", "
                     << b << "." << endl;
            }  // 2
        } else {
            cout << "Il numero inserito e ordinato e': " << a << "." << endl;
        }  // 1
        cout << endl << "Vuoi continuare? <s/n>" << endl;
        cin >> risp;
    } while (risp == 's' || risp == 'S');
    return 0;
}  // main

