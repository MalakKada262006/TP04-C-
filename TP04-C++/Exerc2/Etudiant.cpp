#include "Etudiant.hpp"

int Etudiant::nbEtudiants = 0;

Etudiant::Etudiant(const std::string& n, int a, const Universite* u)
    : nom(n), age(a), universite(u) {
    nbEtudiants++;
}

void Etudiant::afficher() const {
    std::cout << "Etudiant : " << nom << " | Age : " << age << " ans | Universite : ";
    if (universite != nullptr) {
        universite->afficherNom();
    } else {
        std::cout << "Aucune";
    }
    std::cout << std::endl;
}

void Etudiant::afficherTotal() {
    std::cout << "Nombre total d'etudiants crees : " << nbEtudiants << std::endl;
}
