#include "University.hpp"
#include "Etudiant.hpp"
#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {

    Universite u("Universite de Casablanca");

    Etudiant e1("Ali", 20, &u);
    Etudiant e2("Malak", 21, &u);

    e1.afficher();
    e2.afficher();

    Etudiant::afficherTotal();

    return 0;
}
