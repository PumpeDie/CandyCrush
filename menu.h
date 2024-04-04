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
	Text menuprincipal[3];
	Menu(float width, float height);
	void draw(RenderWindow& windows);
	void MoveUp();
	void MoveDown();
	void setSelected(int n);
	int pressed() {return selected_;}
	~Menu();
};
#endif