// Importation des fichiers
#include <iostream>
#include "game.h"
#include "menu.h"

// Initialisation des variables
using namespace std;
using namespace sf;

int pagenum = 1000;

/********************************
 * page num     *   fonction    *
 *------------------------------*
 *   1000       *   mainMenu    *
 *    -1        *     close     *
 *     0        *     enter     *
 *     1        *  insrtuctions *
 *     2        *    credits    *
********************************/

// Fonction main
/* int main() {
    // Initialisation moteur de jeu
    RenderWindow window(VideoMode(1920, 1080), "CandyCrush");
    Menu menu(1920, 1080);

    // Boucle du jeu
    while (true) {
        if (pagenum == 1000) {
            while (window.isOpen()) {
            Event event;

            // Boucle des évènements 
            while (window.pollEvent(event)) {
                if (event.type == Event::Closed) 
                    pagenum = -1;
                if (event.type == Event::KeyPressed) {
                    if (event.key.code == Keyboard::Up)
                        menu.MoveUp();
                    if (event.key.code == Keyboard::Down)
                        menu.MoveDown();
                    if (event.key.code == Keyboard::Escape)
                        pagenum = -1;
                    if (event.key.code == Keyboard::Return) {
                        if (menu.pressed() == 0)
                            pagenum = 0;
                        if (menu.pressed() == 1)
                            pagenum = 1;
                        if (menu.pressed() == 2)
                            pagenum = -1;
                    }
                }
            }

            // Rendu
            window.clear();                                     // Nettoie le frame précédent
            if (pagenum != 1000)
                break;
            menu.draw(window);
            window.display();                                   // Affichage
            }
        }
        if (pagenum == -1) {
            window.close();
            break;
        }
        if (pagenum == 0) {
            break;
        }
    }

    // Fin de l'application
    return 0;
}
*/