#include "Livre.hpp"
#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {

    Livre l1("1984", "George Orwell", 1949);
    Livre l2("Les Miserables", "Victor Hugo", 1862);
    Livre l3("L'Etranger", "Albert Camus", 1942);

    l1.afficher();
    l2.afficher();
    l3.afficher();

    Livre::afficherTotal();

    return 0;
}
