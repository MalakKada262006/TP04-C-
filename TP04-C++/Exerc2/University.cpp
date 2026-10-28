#include "University.hpp"

Universite::Universite(const std::string& n) : nom(n) {}

std::string Universite::getNom() const {
    return nom;
}

void Universite::afficherNom() const {
    std::cout << nom;
}
