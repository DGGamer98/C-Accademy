#include <iostream>

//namespace --> spazio di nomi

//using namespace std;
using std::cout
using std::endl;

namespace Prova {
    int cout = 0;
}

namespace Matematica {

    int somma(int a, int b) {
        return a + b;
    }

    int sotttrazione(int a, int b) {
        return a - b;
    }
}

namespace Gemoteria {
    const double PI = 3.14;

    double areaCerchi(double raggio){
        return PI * raggio * raggio;
    }

    double areaQuadrato(double lato) {
        return lato * lato;
    }
}

int main() {

    int eta; //Dichiarazione
    eta = 23; //assegnazione

    //Costanti
    const int PI = 3.14;
    const int ETA_MASSIMA = 120;

    int eta_padre = 56; //inizializzazione
    eta_padre = 58;

    cout << "Ciao ho " << eta << " anni" << endl;
    std::cout << "ho " << eta << "anni da maggio" << std::endl;
    cout << "Anche tu hai " << ETA_MASSIMA << " anni?" << std::endl;

    //Richiamo namspace Prova
    Prova::cout;
    
    eta = 27;
    
    std::cout << "Ciao ho " << eta << " anni" << std::endl;
    return 0;
    
}