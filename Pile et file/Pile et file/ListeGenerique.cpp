//
//  ListeGenerique.cpp
//  Pile et file
//
//  Created by Yani on 2023-12-05.
//

#include "ListeGenerique.hpp"

template <typename T>
ListeGenerique<T>::ListeGenerique() : tete(nullptr) {}

template <typename T>
void ListeGenerique<T>::ajouter(const T& element) {
    Noeud* nouveauNoeud = new Noeud(element);
    if (!tete) {
        tete = nouveauNoeud;
    } else {
        Noeud* temp = tete;
        while (temp->suivant) {
            temp = temp->suivant;
        }
        temp->suivant = nouveauNoeud;
    }
}

template <typename T>
void ListeGenerique<T>::afficher() const {
    Noeud* temp = tete;
    while (temp) {
        std::cout << temp->valeur << " ";
        temp = temp->suivant;
    }
    std::cout << std::endl;
}

template <typename T>
ListeGenerique<T>::~ListeGenerique() {
    while (tete) {
        Noeud* temp = tete;
        tete = tete->suivant;
        delete temp;
    }
}

template class ListeGenerique<int>;
template class ListeGenerique<std::string>;
