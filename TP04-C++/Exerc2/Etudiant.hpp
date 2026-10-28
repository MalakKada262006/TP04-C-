#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <string>
#include <iostream>
#include "University.hpp"

class Etudiant {
private:
    std::string nom;
    int age;
    const Universite* universite;
    static int nbEtudiants;

public:
    Etudiant(const std::string& n, int a, const Universite* u);

    void afficher() const;

    static void afficherTotal();
};

#endif
