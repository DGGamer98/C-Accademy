/*
###################
## VARIABILI C++ ##
###################

Le variabili sono contenitori per la memorizzazione dei valori dei dati.

In C++ esistono diversi tipi di variabili (definite con parole chiave diverse), ad esempio:


int- memorizza numeri interi (numeri interi), senza decimali, come 123 o -123

double- memorizza numeri in virgola mobile, con decimali, come 19,99 o -19,99

char- memorizza singoli caratteri, come "a" o "B". I valori Char sono racchiusi tra virgolette singole

string- memorizza il testo, come "Hello World". I valori stringa sono racchiusi tra virgolette doppie

bool- memorizza valori con due stati: vero o falso
*/

//Creiamo una variabile

#include <iostream>

using namespace std;

int main() {

    int myNum = 15;
    double test = 19.6;
    char myLetter = 'G';
    string myText = "Ciao sono Davide";
    bool myBool = true;
    
    cout << test;
    cout << myNum;
    cout << myLetter;
    cout << myText;
    cout << myBool;

// cout + << utilizzato per visualizzare una variabile usiamo il + (concatenzaione)

int x = 5;
int y = 10;

int sum = x + y;
cout << sum;



}
