// Importation des fichiers
#include "menu.h"

// Fonctions du menu principal
Menu::Menu(float width, float height) {
	font_.loadFromFile("assets/Gatrich.otf");							// Importation de la police d'écriture

	menuprincipal[0].setFont(font_);
	menuprincipal[0].setFillColor(Color{ 255, 204, 0 });
	menuprincipal[0].setString("Nouvelle Partie");
	menuprincipal[0].setCharacterSize(90);
	menuprincipal[0].setPosition(Vector2f(300, height / 4));

	menuprincipal[1].setFont(font_);
	menuprincipal[1].setFillColor(Color::White);
	menuprincipal[1].setString("Continuer");
	menuprincipal[1].setCharacterSize(90);
	menuprincipal[1].setPosition(Vector2f(300, height / 4 + 200));

	menuprincipal[2].setFont(font_);
	menuprincipal[2].setFillColor(Color::White);
	menuprincipal[2].setString("Quitter");
	menuprincipal[2].setCharacterSize(90);
	menuprincipal[2].setPosition(Vector2f(300, height / 4 + 400));

	selected_ = 0;
}

Menu::~Menu() {}

void Menu::setSelected(int n) {
	selected_ = n;
}

void Menu::draw(RenderWindow& window) {
	for (int i = 0; i < 3; i++)
		window.draw(menuprincipal[i]);
}

void Menu::MoveDown() {
	if (selected_ + 1 <= 3) { 											// Pas quitter
		menuprincipal[selected_].setFillColor(Color::White);
		selected_++;
		if (selected_ == 3)
			selected_ = 0;
		menuprincipal[selected_].setFillColor(Color{ 255, 204, 0 });
	}
}

void Menu::MoveUp() {
	if (selected_ - 1 >= -1) { 											// Pas jouer
		menuprincipal[selected_].setFillColor(Color::White);
		selected_--;
		if (selected_ == -1)
			selected_ = 2;
		menuprincipal[selected_].setFillColor(Color{ 255, 204, 0 });
	}
}