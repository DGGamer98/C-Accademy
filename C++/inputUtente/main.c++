#include <iostream>
#include <string>

using std::string

int main()
{
    string nome;
    string cognome;
    int eta;

    std::cout << "Scrivi il tuo nome " << std::endl;
    std::cin >> nome;
    std::cout << "scrivi il cognome " << std::endl;
    std::cin >> cognome;
    std::cout << "Scrivi l'eta " << std::endl;
    std::cin >> eta;
    std::cout << "ciao " << nome << " " << cognome << " di anni " << eta;
    
    return 0;
}