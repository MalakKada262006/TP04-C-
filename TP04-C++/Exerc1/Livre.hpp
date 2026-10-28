#ifndef LIVRE_HPP
#define LIVRE_HPP

#include <string>
#include <iostream>

class Livre {
private:
    std::string titre;
    std::string auteur;
    int annee;
    static int nbLivres;

public:
    Livre(const std::string& t, const std::string& a, int an);

    void afficher() const;

    static void afficherTotal();
};

#endif
