#include <iostream>
using namespace std;

const int NUM_ALUNNI = 16;
const int NUM_MATERIE = 11;

void CaricaNomi(string alunni[]);
void CaricaVoti(int italiano[], int informatica[], int storia[], int inglese[],
                int filosofia[], int matematica[], int fisica[], int scienze[],
                int disegnoArte[], int scienzeMotorie[], int condotta[]);
void Promosso(bool promosso[], int italiano[], int informatica[], int storia[],
              int inglese[], int filosofia[], int matematica[], int fisica[],
              int scienze[], int disegnoArte[], int scienzeMotorie[],
              int condotta[]);
void CalcolaMedia(float media[], int italiano[], int informatica[],
                  int storia[], int inglese[], int filosofia[],
                  int matematica[], int fisica[], int scienze[],
                  int disegnoArte[], int scienzeMotorie[], int condotta[]);
void Rimandato(int numDebiti[], int italiano[], int informatica[], int storia[],
               int inglese[], int filosofia[], int matematica[], int fisica[],
               int scienze[], int disegnoArte[], int scienzeMotorie[]);

int main() {
    // Alunni:
    string alunni[NUM_ALUNNI];
    CaricaNomi(alunni);
    // Materie:
    int italiano[NUM_ALUNNI];
    int informatica[NUM_ALUNNI];
    int storia[NUM_ALUNNI];
    int inglese[NUM_ALUNNI];
    int filosofia[NUM_ALUNNI];
    int matematica[NUM_ALUNNI];
    int fisica[NUM_ALUNNI];
    int scienze[NUM_ALUNNI];
    int disegnoArte[NUM_ALUNNI];
    int scienzeMotorie[NUM_ALUNNI];
    int condotta[NUM_ALUNNI];
    CaricaVoti(italiano, informatica, storia, inglese, filosofia, matematica,
               fisica, scienze, disegnoArte, scienzeMotorie, condotta);
    // Promosso:
    bool promosso[NUM_ALUNNI];
    Promosso(promosso, italiano, informatica, storia, inglese, filosofia,
             matematica, fisica, scienze, disegnoArte, scienzeMotorie,
             condotta);
    // Media:
    float media[NUM_ALUNNI];
    CalcolaMedia(media, italiano, informatica, storia, inglese, filosofia,
                 matematica, fisica, scienze, disegnoArte, scienzeMotorie,
                 condotta);
    // Debiti:
    int numDebiti[NUM_ALUNNI];
    Rimandato(numDebiti, italiano, informatica, storia, inglese, filosofia,
              matematica, fisica, scienze, disegnoArte, scienzeMotorie);
    // Scrutinio finale:
    cout << "SCRUTINIO FINALE - Anno Scolastico 2017/2018" << endl;
    for (int i = 0; i < NUM_ALUNNI; i++) {
        cout << endl << i + 1 << ") " << alunni[i] << endl;
        if (promosso[i]) {  // Promosso: tutte le materie hanno voto maggiore o
                            // uguale a 6
            cout << "Promosso/a - Media: " << media[i] << endl;
        } else {  // Bocciato o Rimandato
            if (condotta[i] < 6 ||
                numDebiti[i] >
                    3) {  // Bocciato: voto di condotta minore di 6
                          // (indipendentemente dai voti delle altre materie)
                          // oppure 4 o piu' materie con voto minore di 6
                cout << "Bocciato/a" << endl;
            } else {  // Rimandato: da 1 a 3 materie con voto minore di 6
                cout << "Rimandato/a in " << numDebiti[i]
                     << " materia/e:" << endl;
                if (italiano[i] < 6) {
                    cout << "- ITALIANO" << endl;
                }
                if (informatica[i] < 6) {
                    cout << "- INFORMATICA" << endl;
                }
                if (storia[i] < 6) {
                    cout << "- STORIA" << endl;
                }
                if (inglese[i] < 6) {
                    cout << "- INGLESE" << endl;
                }
                if (filosofia[i] < 6) {
                    cout << "- FILOSOFIA" << endl;
                }
                if (matematica[i] < 6) {
                    cout << "- MATEMATICA" << endl;
                }
                if (fisica[i] < 6) {
                    cout << "- FISICA" << endl;
                }
                if (scienze[i] < 6) {
                    cout << "- SCIENZE" << endl;
                }
                if (disegnoArte[i] < 6) {
                    cout << "- DISEGNO E ST. ARTE" << endl;
                }
                if (scienzeMotorie[i] < 6) {
                    cout << "- SCIENZE MOTORIE" << endl;
                }
            }
        }
    }
    return 0;
}

void CaricaNomi(string alunni[]) {
    alunni[0] = "Cognome Nome A a";
    alunni[1] = "Cognome Nome B b";
    alunni[2] = "Cognome Nome C c";
    alunni[3] = "Cognome Nome D d";
    alunni[4] = "Cognome Nome E e";
    alunni[5] = "Cognome Nome F f";
    alunni[6] = "Cognome Nome G g";
    alunni[7] = "Cognome Nome H h";
    alunni[8] = "Cognome Nome I i";
    alunni[9] = "Cognome Nome J j";
    alunni[10] = "Cognome Nome K k";
    alunni[11] = "Cognome Nome L l";
    alunni[12] = "Cognome Nome M m";
    alunni[13] = "Cognome Nome N n";
    alunni[14] = "Cognome Nome O o";
    alunni[15] = "Cognome Nome P p";
}

void CaricaVoti(int italiano[], int informatica[], int storia[], int inglese[],
                int filosofia[], int matematica[], int fisica[], int scienze[],
                int disegnoArte[], int scienzeMotorie[], int condotta[]) {
    // 1:
    italiano[0] = 8;
    informatica[0] = 8;
    storia[0] = 8;
    inglese[0] = 8;
    filosofia[0] = 7;
    matematica[0] = 9;
    fisica[0] = 9;
    scienze[0] = 8;
    disegnoArte[0] = 9;
    scienzeMotorie[0] = 8;
    condotta[0] = 9;
    // 2:
    italiano[1] = 8;
    informatica[1] = 7;
    storia[1] = 7;
    inglese[1] = 8;
    filosofia[1] = 8;
    matematica[1] = 7;
    fisica[1] = 8;
    scienze[1] = 9;
    disegnoArte[1] = 8;
    scienzeMotorie[1] = 8;
    condotta[1] = 9;
    // 3*:
    italiano[2] = 7;
    informatica[2] = 7;
    storia[2] = 7;
    inglese[2] = 7;
    filosofia[2] = 7;
    matematica[2] = 7;
    fisica[2] = 7;
    scienze[2] = 8;
    disegnoArte[2] = 9;
    scienzeMotorie[2] = 7;
    condotta[2] = 9;
    // 4:
    italiano[3] = 9;
    informatica[3] = 7;
    storia[3] = 8;
    inglese[3] = 8;
    filosofia[3] = 8;
    matematica[3] = 9;
    fisica[3] = 8;
    scienze[3] = 9;
    disegnoArte[3] = 9;
    scienzeMotorie[3] = 7;
    condotta[3] = 10;
    // 5:
    italiano[4] = 6;
    informatica[4] = 6;
    storia[4] = 6;
    inglese[4] = 6;
    filosofia[4] = 6;
    matematica[4] = 7;
    fisica[4] = 6;
    scienze[4] = 7;
    disegnoArte[4] = 9;
    scienzeMotorie[4] = 7;
    condotta[4] = 8;
    // 6:
    italiano[5] = 7;
    informatica[5] = 8;
    storia[5] = 8;
    inglese[5] = 8;
    filosofia[5] = 7;
    matematica[5] = 9;
    fisica[5] = 9;
    scienze[5] = 9;
    disegnoArte[5] = 9;
    scienzeMotorie[5] = 8;
    condotta[5] = 9;
    // 7:
    italiano[6] = 7;
    informatica[6] = 6;
    storia[6] = 8;
    inglese[6] = 8;
    filosofia[6] = 7;
    matematica[6] = 7;
    fisica[6] = 6;
    scienze[6] = 7;
    disegnoArte[6] = 8;
    scienzeMotorie[6] = 7;
    condotta[6] = 9;
    // 8:
    italiano[7] = 8;
    informatica[7] = 7;
    storia[7] = 9;
    inglese[7] = 8;
    filosofia[7] = 8;
    matematica[7] = 8;
    fisica[7] = 7;
    scienze[7] = 8;
    disegnoArte[7] = 8;
    scienzeMotorie[7] = 9;
    condotta[7] = 9;
    // 9:
    italiano[8] = 8;
    informatica[8] = 7;
    storia[8] = 6;
    inglese[8] = 8;
    filosofia[8] = 8;
    matematica[8] = 6;
    fisica[8] = 6;
    scienze[8] = 7;
    disegnoArte[8] = 9;
    scienzeMotorie[8] = 7;
    condotta[8] = 9;
    // 12:
    italiano[9] = 6;
    informatica[9] = 6;
    storia[9] = 6;
    inglese[9] = 6;
    filosofia[9] = 6;
    matematica[9] = 6;
    fisica[9] = 6;
    scienze[9] = 6;
    disegnoArte[9] = 8;
    scienzeMotorie[9] = 7;
    condotta[9] = 8;
    // 13:
    italiano[10] = 6;
    informatica[10] = 6;
    storia[10] = 6;
    inglese[10] = 7;
    filosofia[10] = 6;
    matematica[10] = 6;
    fisica[10] = 6;
    scienze[10] = 7;
    disegnoArte[10] = 8;
    scienzeMotorie[10] = 7;
    condotta[10] = 9;
    // 14:
    italiano[11] = 7;
    informatica[11] = 7;
    storia[11] = 8;
    inglese[11] = 8;
    filosofia[11] = 8;
    matematica[11] = 8;
    fisica[11] = 8;
    scienze[11] = 9;
    disegnoArte[11] = 9;
    scienzeMotorie[11] = 7;
    condotta[11] = 10;
    // 15:
    italiano[12] = 8;
    informatica[12] = 9;
    storia[12] = 8;
    inglese[12] = 8;
    filosofia[12] = 9;
    matematica[12] = 9;
    fisica[12] = 9;
    scienze[12] = 9;
    disegnoArte[12] = 10;
    scienzeMotorie[12] = 7;
    condotta[12] = 10;
    // NUM_ALUNNI:
    italiano[13] = 6;
    informatica[13] = 6;
    storia[13] = 6;
    inglese[13] = 6;
    filosofia[13] = 6;
    matematica[13] = 6;
    fisica[13] = 7;
    scienze[13] = 6;
    disegnoArte[13] = 9;
    scienzeMotorie[13] = 7;
    condotta[13] = 9;
    // 17*:
    italiano[14] = 7;
    informatica[14] = 6;
    storia[14] = 7;
    inglese[14] = 8;
    filosofia[14] = 7;
    matematica[14] = 7;
    fisica[14] = 7;
    scienze[14] = 7;
    disegnoArte[14] = 8;
    scienzeMotorie[14] = 7;
    condotta[14] = 8;
    // 18:
    italiano[15] = 8;
    informatica[15] = 7;
    storia[15] = 7;
    inglese[15] = 7;
    filosofia[15] = 8;
    matematica[15] = 8;
    fisica[15] = 8;
    scienze[15] = 8;
    disegnoArte[15] = 9;
    scienzeMotorie[15] = 7;
    condotta[15] = 10;
    // Test:
    italiano[0] = 5;     // 8;
    italiano[1] = 5;     // 8;
    informatica[1] = 4;  // 7;
    italiano[2] = 4;     // 7;
    informatica[2] = 5;  // 7;
    storia[2] = 5;       // 7;
    condotta[3] = 5;     // 10;
    italiano[4] = 4;     // 6;
    informatica[4] = 5;  // 6;
    storia[4] = 5;       // 6;
    inglese[4] = 4;      // 6;
}

void Promosso(bool promosso[], int italiano[], int informatica[], int storia[],
              int inglese[], int filosofia[], int matematica[], int fisica[],
              int scienze[], int disegnoArte[], int scienzeMotorie[],
              int condotta[]) {
    for (int i = 0; i < NUM_ALUNNI; i++) {
        if (italiano[i] >= 6 && informatica[i] >= 6 && storia[i] >= 6 &&
            inglese[i] >= 6 && filosofia[i] >= 6 && matematica[i] >= 6 &&
            fisica[i] >= 6 && scienze[i] >= 6 && disegnoArte[i] >= 6 &&
            scienzeMotorie[i] >= 6 && condotta[i] >= 6) {
            promosso[i] = true;
        } else {
            promosso[i] = false;
        }
    }
}

void CalcolaMedia(float media[], int italiano[], int informatica[],
                  int storia[], int inglese[], int filosofia[],
                  int matematica[], int fisica[], int scienze[],
                  int disegnoArte[], int scienzeMotorie[], int condotta[]) {
    for (int i = 0; i < NUM_ALUNNI; i++) {
        float somma = italiano[i] + informatica[i] + storia[i] + inglese[i] +
                      filosofia[i] + matematica[i] + fisica[i] + scienze[i] +
                      disegnoArte[i] + scienzeMotorie[i] + condotta[i];
        media[i] = somma / NUM_MATERIE;
    }
}

void Rimandato(int numDebiti[], int italiano[], int informatica[], int storia[],
               int inglese[], int filosofia[], int matematica[], int fisica[],
               int scienze[], int disegnoArte[], int scienzeMotorie[]) {
    for (int i = 0; i < NUM_ALUNNI; i++) {
        numDebiti[i] = 0;
        if (italiano[i] < 6) {
            numDebiti[i] = numDebiti[i] + 1;
        }
        if (informatica[i] < 6) {
            numDebiti[i] = numDebiti[i] + 1;
        }
        if (storia[i] < 6) {
            numDebiti[i] = numDebiti[i] + 1;
        }
        if (inglese[i] < 6) {
            numDebiti[i] = numDebiti[i] + 1;
        }
        if (filosofia[i] < 6) {
            numDebiti[i] = numDebiti[i] + 1;
        }
        if (matematica[i] < 6) {
            numDebiti[i] = numDebiti[i] + 1;
        }
        if (fisica[i] < 6) {
            numDebiti[i] = numDebiti[i] + 1;
        }
        if (scienze[i] < 6) {
            numDebiti[i] = numDebiti[i] + 1;
        }
        if (disegnoArte[i] < 6) {
            numDebiti[i] = numDebiti[i] + 1;
        }
        if (scienzeMotorie[i] < 6) {
            numDebiti[i] = numDebiti[i] + 1;
        }
    }
}

