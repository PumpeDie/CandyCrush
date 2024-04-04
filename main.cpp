// Importation des fichiers
#include <iostream>
#include "game.h"
#include "menu.h"

// Initialisation des variables
using namespace std;
using namespace sf;

// Fonction main
int main() {
    // Initialisation moteur du jeu
    Game game;

    // Boucle du jeu
    while (game.running()) {
        
        // Update
        game.update();

        // Rendu
        game.render();
    }

    // Fin du jeu
    return 0;
}