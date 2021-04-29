#include <iostream>

int main() {
    int nb_valeurs = 0;
    int* valeurs;
    int minimum;
    int maximum;

    // On demande le nombre de valeurs à conserver.
    std::cout << "Combien de valeurs : ";
    std::cin >> nb_valeurs;

    // Vérification que le nombre donné fait du sens.
    if (nb_valeurs <= 0) {
        std::cout << "PetitE comique !";
        std::cout << std::endl;
        return 1;
    }

    // Allocation dynamique de la mémoire.
    valeurs = new int[nb_valeurs];

    // Entrée des valeurs.
    for (int i=0 ; i<nb_valeurs ; i++) {
        std::cout << "Entrez une valeur : ";
        std::cin >> valeurs[i];
    }

    // Détermination du minimum et du maximum.
    minimum = valeurs[0];
    maximum = valeurs[0];
    for (int i=1 ; i<nb_valeurs ; i++) {
        if (valeurs[i] < minimum)
            minimum = valeurs[i];
        if (valeurs[i] > maximum)
            maximum = valeurs[i];
    }

    // Affichage des résultats.
    std::cout << "Min = " << minimum;
    std::cout << std::endl;
    std::cout << "Max = " << maximum;
    std::cout << std::endl;

    // Libération de la mémoire allouée dynamiquement.
    delete[] valeurs;
}