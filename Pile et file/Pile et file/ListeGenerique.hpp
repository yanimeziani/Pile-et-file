//
//  ListeGenerique.hpp
//  Pile et file
//
//  Created by Yani on 2023-12-05.
//

#include <iostream>

template <typename T>
class ListeGenerique {
private:
    struct Noeud {
        T valeur;
        Noeud* suivant;
        Noeud(const T& val) : valeur(val), suivant(nullptr) {}
    };

    Noeud* tete;

public:
    ListeGenerique();
    void ajouter(const T& element);
    void afficher() const;
    ~ListeGenerique();
};


