/*
Réaliser une classe set_char permettant de manipuler des ensembles de char.
On doit pouvoir réaliser sur cet ensemble les opérations suivantes :
    - Ajouter un element
    - Connaitre son cardinal
    - Savoir si un caractère est présent
Aucune allocation dynamique, il faut prévoir en membre donnés un tableau de taille
fixe

-- AJOUT EX 70 --
Trois nouvelles methodes qui permettent l'iteration
 init : initialise l'iterateur
 next : get le prochain
 is_last : savoir si on peut continuer à parcourir  
*/
#include <iostream>
#include "./set_char.h"
int main(int argc, char **argv)
{
    set_char s;
    std::cout << "Add char = " << s.add_char('h') << std::endl;
    s.add_char('e');
    std::cout << "Contains " << s.get_card() << " chars" << std::endl;
    s.display();
    
    char c = 'z';
    if(s.is_char_present(c))
    {
        std::cout << "The char " << c << " is present." << std::endl;
    }
    else
    {
        std::cout << "The char " << c << " is not present." << std::endl;
    }

    s.add_char(c);
    s.display();
    if(s.is_char_present(c))
    {
        std::cout << "The char " << c << " is present." << std::endl;
    }
    else
    {
        std::cout << "The char " << c << " is not present." << std::endl;
    }
    return 0;
}