#include <SFML/Graphics.hpp>
#include <iostream>
#include "menu.h"

using namespace std;
using namespace sf;

int main() {
    RenderWindow window(VideoMode(1920, 1080), "Game");
    Menu menu(1920, 1080);

    while (true) {
        while (window.isOpen()) {
            Event event;
            while (window.pollEvent(event)) {
                if (event.type == Event::Closed) {
                    window.close();
                    break;
                }
                if (event.type == Event::KeyPressed) {
                    if (event.key.code == Keyboard::Up)
                        menu.MoveUp();
                    if (event.key.code == Keyboard::Down)
                        menu.MoveDown();
                    if (event.key.code == Keyboard::Escape) {
                        window.close();
                        break;
                    }
                }
            }
            window.clear();
            menu.draw(window);
            window.display();
        }
    }
    return 0;
}