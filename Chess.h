#pragma on
#include "Figure.h"
#include "King.h"
#include <list>
#include <string>

using namespace std;

class Chess {
public:
	list<Figure*> listFigures;
	King* blackKing;
	string isCheckmate();

	Chess();
	Chess(King*, list<Figure*>);
private:
	bool horizontalAndVerticalHit();
	bool thereIsFigureHere(Coordinate*);
	TypeFigures getTypeFirure(Coordinate*);
};

