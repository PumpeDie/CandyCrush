// Importation des fichiers
#include "game.h"

// Fonctions Privés
void Game::initVariables() {
    window = nullptr;
}

void Game::initWindow() {
    videoMode.width = 1920;
    videoMode.height = 1080;
    window = new sf::RenderWindow(videoMode, "CandyCrush");
}

// Constructeurs et Destructeurs
Game::Game() {
    initVariables();
    initWindow();
}

Game::~Game() {
    delete window;
}

// Fonctions
const bool Game::running() const {
    return window->isOpen();
}

void Game::pollEvents() {
    while (window->pollEvent(ev)) {
        switch (ev.type)
        {
        case sf::Event::Closed:
            window->close();
            break;
        case sf::Event::KeyPressed:
            if (ev.key.code == sf::Keyboard::Escape)
                window->close();
                break;
        }
    }
}

void Game::update() {
    pollEvents();
}

void Game::render() {
    window->clear(sf::Color::Blue);
    window->display();
}