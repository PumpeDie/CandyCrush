// Déclaration de la classe Game
#ifndef game_h
#define game_h

// Importation fichiers SFML nécessaire 
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

class Game {
private:
    // Variables

    // Fenêtre
    sf::RenderWindow* window;
    sf::VideoMode videoMode;
    sf::Event ev;

    // Fonctions privés
    void initVariables();
    void initWindow();
public:
    // Constructeurs et Destructeurs
    Game();
    virtual ~Game();

    // Fonctions
    const bool running() const;
    void pollEvents();
    void update();
    void render();
};

#endif