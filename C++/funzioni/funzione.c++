/*
Una funzione è un blocco di codice che viene eseguito solo quando viene chiamato.

Nella funzione possiamo passare dei parametri, in una funzione.

Funzioni = utili per eseguire blocochi di codice
*/

#include<iostream>

using namespace std;

//Dichiarazioni
//Separare dichiarazione e definizione -> per ottimizzare il codice
void test();
void function();


//void function() {
//    cout << "La mia prima funzione";
//}

int main() {
    cout << "ciao";

    function();

    //può essere chiamata più volte
    function();
    function();
    function();

    test();
    return 0;
}

//Definizione
void function() {
    cout << "La mia prima funzione";
}

void test() {
    cout <<"Stampa";
}