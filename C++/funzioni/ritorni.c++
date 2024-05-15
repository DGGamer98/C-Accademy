/*
le funzioni/metodi void non accettano i ritorni (return)

puoi usare int o string per usare il return

Esempio:
*/

#include<iostream>
//Dichiarazioni
int sottrazione(int, int);
int addizione(int, int);

int function(int x) {
    return 5 + x;
}

int main() {

    //restituzione della somma 5 + 3 = 8 
    cout << function(3);
    //output = 2
    cout << sottrazione(5, 3);

    //Possiamo memorizzare il risultato in una variabile
    int z = addizione(10,10);
    cout << z;
    
    return 0;
}

//Definizioni
int sottrazione(int x, int y) {
    return x - y;
}

int addizione(int x, int y) {
    return x + y;
}