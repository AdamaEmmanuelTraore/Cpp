/*
    Scrivere un programma che inseriti da tastiera due numeri interi
    da tastiera ne stampi il maggiore; se i due numeri sono uguali deve
    essere stampata la somma dei due numeri.

    INPUT? Due numeri interi
    OUTPUT? Un numero intero
    VINCOLI? Stampa la somma se sono uguali
*/

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Inserisci il primo numero : ";
    cin >> a;
    cout << "Inserisci il secondo numero : ";
    cin >> b;
    if (a == b) {
        cout << "La somma dei due numeri e' : " << a + b << endl;
    } else if (a > b) {
        cout << a << " e' maggiore di " << b << endl;
    } else {
        cout << b << " e' maggiore di " << a << endl;
    }
    // Mantieni aperta la console finché premi invio
    cin.ignore(); // serve per "pulire" il buffer dopo cin >>
    cin.get();    // attende un invio da tastiera

    return 0;
}