#include "Rook.h"

Rook::Rook() {
	this->coordinate = new Coordinate();
}

Rook::Rook(Coordinate* coordinate) {
	this->coordinate = coordinate;
}