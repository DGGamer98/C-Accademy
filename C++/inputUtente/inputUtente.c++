/*
cout --> viene utilizzato per stampare valori, ora lo utilizzeremo cin per ottenere l'unput dell'utente

cin ---> esso è una variabile predefinita che legge i dati dalla tastiera con l'operatore di estrazione ( >> ).

In questo esempio l'utente può inserire un numero, che viene memorizzato nella variabile x. Quindi stampiano il valore di X
*/

#include <iostream>

using namespace std;

int main() {

    int x;
    string y = "Ciao a tutti";
    
    cout << "Inserisci un numero";
    
    cin >> x;
    cin >> y;

    cout << "Il tuo numero è" + x;
    return 0;
    

}