#pragma once
#include "Figure.h"
class King : public Figure {
public:
	TypeFigures typeFigure = TypeKing;

	King();
	King(Coordinate*);
};

