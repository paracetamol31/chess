#include "Chess.h"

Chess::Chess() {
	this->blackKing = new King();
}

Chess::Chess(King* blackKing, list<Figure*> list){
	this->blackKing = blackKing;
	this->listFigures = list;
}

string Chess::isCheckmate() {
	if (horizontalAndVerticalHit()) {
		return "hit";
	}
	else return "no-hit";

}

bool Chess::horizontalAndVerticalHit() {
	bool flag = false;
	Coordinate* coordBlackKing = new Coordinate(*blackKing->coordinate);
	coordBlackKing->coordX++;
	while (coordBlackKing->isValid()) {
		if (thereIsFigureHere(coordBlackKing)) {
			flag = true;
			break;
		}
		coordBlackKing->coordX++;
	}

	if (!flag) {
		coordBlackKing = new Coordinate(*blackKing->coordinate);
		coordBlackKing->coordX--;
		while (coordBlackKing->isValid()) {
			if (thereIsFigureHere(coordBlackKing)) {
				flag = true;
				break;
			}
			coordBlackKing->coordX--;
		}
	}

	if (!flag) {
		coordBlackKing = new Coordinate(*blackKing->coordinate);
		coordBlackKing->coordY++;
		while (coordBlackKing->isValid()) {
			if ( thereIsFigureHere(coordBlackKing)) {
				flag = true;
				break;
			}
			coordBlackKing->coordY++;
		}
	}

	if (!flag) {
		coordBlackKing = new Coordinate(*blackKing->coordinate);
		coordBlackKing->coordY--;
		while (coordBlackKing->isValid()) {
			if (thereIsFigureHere(coordBlackKing)) {
				flag = true;
				break;
			}
			coordBlackKing->coordY--;
		}
	}
	if (flag) {
		TypeFigures TypeFigure = getTypeFirure(coordBlackKing);
		if (TypeFigure == TypeRook || TypeFigure == TypeQueen || TypeFigure == TypeKing) {
			return true;
		}
	}
	return false;
}

bool Chess::thereIsFigureHere(Coordinate* coordinate) {
	for (Figure* figure : this->listFigures) {
		if (figure->coordinate->comparison(coordinate)) {
			return true;
		}
	}
	return false;
}

TypeFigures Chess::getTypeFirure(Coordinate* coordinate) {
	for (Figure* figure : this->listFigures) {
		if (figure->coordinate->comparison(coordinate)) {
			TypeFigures t =  figure->typeFigure;
			return t;
		}
	}
	throw new exception("not figure");
}