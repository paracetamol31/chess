#pragma once
#include "Figure.h"
#include "Coordinate.h"
class Rook : public Figure {
public:
	TypeFigures typeFigure = TypeRook;

	Rook();
	Rook(Coordinate*);
};

