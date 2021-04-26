#pragma once
#include "Figure.h"
#include "Coordinate.h"
class Elephant : Figure {
	TypeFigures typeFigure = TypeElephant;

	Elephant();
	Elephant(Coordinate);
};

