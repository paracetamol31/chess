#include "Chess.h"
#include "Figure.h"
#include <string>
#include "Rook.h"
#include <list>
#include "Horse.h"

int main() {
	list<Figure*> listFigures;
	Horse* t = new Horse(new Coordinate(1, 8));
	listFigures.push_back(t);
	Chess* chess = new Chess(new King(new Coordinate(1, 5)), listFigures);
	string a = chess->isCheckmate();
	return(0);
}