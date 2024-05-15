/*
Quando una persona non vuole che  altri modifichino il valore della variabile esistenti,

Bisogna utilizzare il const --> dichiarerà la variabile come una costante che vuol dire immutabile o in sola lettura.

*/

#include <iostream>

using namespace std;

int main() {
    const int numero = 10;

     int numero = 20;

    cout << numero;
    
    return 0;

}