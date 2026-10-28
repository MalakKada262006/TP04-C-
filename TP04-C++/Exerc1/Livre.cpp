#include "Livre.hpp"

int Livre::nbLivres = 0;

Livre::Livre(const std::string& t, const std::string& a, int an)
    : titre(t), auteur(a), annee(an) {
    nbLivres++;
}

void Livre::afficher() const {
    std::cout << "Livre : " << titre << " | Auteur : " << auteur << " | Annee : " << annee << std::endl;
}

void Livre::afficherTotal() {
    std::cout << "Nombre total de livres crees : " << nbLivres << std::endl;
}
