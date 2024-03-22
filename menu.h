// Déclaration de la classe menu
#ifndef menu_h
#define menu_h

#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class Menu {
private:
	int selected;
	Font font;
public :
	Text menuprincipal[3];
	Menu(float width, float height);
	void draw(RenderWindow& windows);
	void MoveUp();
	void MoveDown();
	void setSelected(int n);
	int pressed() {return selected;}
	~Menu();
};
#endif