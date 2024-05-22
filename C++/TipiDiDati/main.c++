#include <iostream>
#include <string>

using std::string

int main()
{
    int eta = 26;

    //la cosa che li differenzia sta nella quantità di decimali che possono gestire float 7, double 15
    float eta = 26.5;
    double eta = 26.52;

    //carattere si identifica con i singoli caratteri
    char eta = 'v';

    string eta1 = "true";

    //Valore booleano se dice se è vero o falso
    bool isOnline = false;

    std::cout << "ciao ho " << eta << " anni" << std::endl;

    
    std::cout << "Ciao ho "<< eta1 << " anni" << std:endl;

    return 0;

}