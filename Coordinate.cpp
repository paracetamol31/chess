#include "Coordinate.h"

bool Coordinate::isValid() {
	return coordX <= MaxValueCoordinates && coordX >= MinValueCoordinates &&
		coordY <= MaxValueCoordinates && coordY >= MinValueCoordinates;
}

Coordinate::Coordinate() {
	coordX = 0;
	coordY = 0;
}

Coordinate::Coordinate(int X, int Y) {
	coordX = X;
	coordY = Y;
}

Coordinate::Coordinate(const Coordinate& object)
{
	coordX = object.coordX;
	coordY = object.coordY;
}

bool Coordinate::comparison(Coordinate* coordinate) {
	bool t = coordX == coordinate->coordX && coordY == coordinate->coordY;
		return t;
}