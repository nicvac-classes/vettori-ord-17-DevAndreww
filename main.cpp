#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));   
    
    int n, i;

    cout << "Inserisci il numero di elementi da generare." << endl;
    cin >> n;
    int pari[n], dispari[n];

    i = 0;
    while (i < n) {
        int numero;

        numero = rand() % n;
        if (numero % 2 == 0) {
            pari[i] = numero;
        } else {
            dispari[i] = numero;
        }
        i = i + 1;
    }
    int j, t;

    i = 0;
    t = 0;
    while (i < n) {
        j = 0;
        while (j < n - 1) {
            if (pari[j] > pari[j + 1]) {
                t = pari[j];
                pari[j] = pari[j + 1];
                pari[j + 1] = t;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    t = 0;
    while (i < n) {
        j = 0;
        while (j < n - 1) {
            if (dispari[j] > dispari[j + 1]) {
                t = dispari[j];
                dispari[j] = dispari[j + 1];
                dispari[j + 1] = t;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    
}


