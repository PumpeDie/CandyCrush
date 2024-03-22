#include <iostream>
#include "menu.h"
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

Menu::Menu(float width, float height) {
	font.loadFromFile("assets/Gatrich.otf");

	menuprincipal[0].setFont(font);
	menuprincipal[0].setFillColor(Color{ 255, 204, 0 });
	menuprincipal[0].setString("Nouvelle Partie");
	menuprincipal[0].setCharacterSize(90);
	menuprincipal[0].setPosition(Vector2f(300, height / 4));

	menuprincipal[1].setFont(font);
	menuprincipal[1].setFillColor(Color::White);
	menuprincipal[1].setString("Continuer");
	menuprincipal[1].setCharacterSize(90);
	menuprincipal[1].setPosition(Vector2f(300, height / 4 + 200));

	menuprincipal[2].setFont(font);
	menuprincipal[2].setFillColor(Color::White);
	menuprincipal[2].setString("Quitter");
	menuprincipal[2].setCharacterSize(90);
	menuprincipal[2].setPosition(Vector2f(300, height / 4 + 400));

	selected = 0;
}

Menu::~Menu() {}

void Menu::setSelected(int n) {
	selected = n;
}

void Menu::draw(RenderWindow& window) {
	for (int i = 0; i < 3; i++)
		window.draw(menuprincipal[i]);
}

void Menu::MoveDown() {
	if (selected + 1 <= 3) { // Pas quitter
		menuprincipal[selected].setFillColor(Color::White);
		selected++;
		if (selected == 3)
			selected = 0;
		menuprincipal[selected].setFillColor(Color{ 255, 204, 0 });
	}
}

void Menu::MoveUp() {
	if (selected - 1 >= -1) { // Pas jouer
		menuprincipal[selected].setFillColor(Color::White);
		selected--;
		if (selected == -1)
			selected = 2;
		menuprincipal[selected].setFillColor(Color{ 255, 204, 0 });
	}
}