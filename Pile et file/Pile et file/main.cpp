//
//  main.cpp
//  Pile et file
//
//  Created by Yani on 2023-12-05.
//

#include <iostream>
#include "ListeGenerique.hpp"

int main(int argc, const char * argv[]) {
    ListeGenerique<std::string> liste;
    liste.ajouter("Hello");
    liste.ajouter("2");
    liste.afficher();
    return 0;
}
