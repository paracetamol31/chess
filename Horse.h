#pragma once
#include "Figure.h"
class Horse : public Figure {
public:
	TypeFigures typeFigure = TypeHorse;

	Horse();
	Horse(Coordinate*);
};

