// Déclaration de la classe menu
#ifndef menu_h
#define menu_h

// Importation fichiers SFML nécessaire 
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

using namespace std;
using namespace sf;

class Menu {
private:
	int selected_;
	Font font_;
public :
	// Constructeurs et Destructeurs
	Menu(float width, float height);
	~Menu();

	// Fonctions
	Text menuprincipal[3];
	void draw(RenderWindow& windows);
	void MoveUp();
	void MoveDown();
	void setSelected(int n);
	int pressed() {return selected_;}
};
#endif