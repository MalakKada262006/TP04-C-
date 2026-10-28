#ifndef UNIVERSITE_HPP
#define UNIVERSITE_HPP

#include <string>
#include <iostream>

class Universite {
private:
    std::string nom;

public:
    Universite(const std::string& n);

    std::string getNom() const;
    void afficherNom() const;
};

#endif
