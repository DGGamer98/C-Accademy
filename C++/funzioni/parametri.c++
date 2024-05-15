/*
Le informazioni possiamo passarle alle funzioni come parametro.
Essi agiscono come variabili all'iterno della funzione.

Esempio:

L'esempio seguente ha una funzione che accetta un fname string chiamato come parametro. 
Quando viene chiamata la funzione, passiamo un nome, che viene utilizzato all'interno della funzione per stampare il nome completo:
*/

#include <iostream>
#include <string>
using namespace std;


//creazione di una funzione con parametri mulipli, in questo caso si aspetto questi tipi di dato
void identificazione(string, int);

//Creazione di una funzione separata con un parametro definito
void Stato();

void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
    myFunction("Davide");
    myFunction("Gatta");

    Stato("Svizzera");
    Stato("California");
    Stato("USA");

    //Chiamando la funzione senza argomento, utilizza il valore predefinito
    Stato();

    identificazione("Davide", 3);
    identificazione("Rossi", 14);
    identificazione("Chiara", 40);

    return 0;

}

void Stato(string country = "Norvegia") {
    cout << country << "\n";
}

//Dentro la funzione possiamo aggiungere tutti i parametri che vogliamo
void identificazione(string nome, int eta) {
    cout << nome << " Refsnes. " << eta << " years old. \n";
}