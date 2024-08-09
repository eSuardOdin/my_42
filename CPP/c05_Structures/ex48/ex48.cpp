/*
    Soit le type enregistrement défini comme suit :
    const int NMOIS = 12;
    struct enregistrement
    {
        char *name;
        int stock;
        float prix;
        int ventes[NMOIS];
    };

    Ecrire une fonction nommée raz qui met à 0 les champs stock et ventes.
    
    void raz(enregistrement e);
*/
#include <iostream>
const int NMOIS = 12;
struct enregistrement
{
    int stock;
    float prix;
    int ventes[NMOIS];
};

void display_enregistrement(enregistrement *e)
{
    float total = 0;
    std::cout << "Le produit " 
    << " vendu au prix de " << e->prix 
    << "€ a un stock restant de " << e->stock << std::endl;
    std::cout << "Ventes mensuelles :" << std::endl;
    for (int i = 0; i < NMOIS; i++)
    {
        std::cout << "\tMois " << i + 1 << ": " << e->ventes[i] << " ventes." << std::endl;
        std::cout << "\t\tBenefice : " << e->ventes[i] * e->prix << "€"<< std::endl;

        total += e->ventes[i] * e->prix;
    }

    std::cout << "Benefice sur l'année : " << total << "€" << std::endl;
}

void raz(enregistrement *e)
{
    std::cout << "Remise à zéro du produit " << std::endl;
    e->stock = 0;
    for (int i = 0; i < NMOIS; i++)
    {
        e->ventes[i] = 0;
    }
}

int main(int argc, char **argv)
{
    enregistrement pokemon;
    pokemon.prix = 59.9;
    pokemon.stock = 905;
    pokemon.ventes[0] = 12;
    pokemon.ventes[1] = 54;
    pokemon.ventes[2] = 32;
    pokemon.ventes[3] = 87;
    pokemon.ventes[4] = 102;
    pokemon.ventes[5] = 200;
    pokemon.ventes[6] = 185;
    pokemon.ventes[7] = 154;
    pokemon.ventes[8] = 129;
    pokemon.ventes[9] = 100;
    pokemon.ventes[10] = 108;
    pokemon.ventes[11] = 170;

    display_enregistrement(&pokemon);
    raz(&pokemon);
    display_enregistrement(&pokemon);
}