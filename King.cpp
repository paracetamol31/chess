#include "King.h"

King::King() {
	this->coordinate = new Coordinate();
}

King::King(Coordinate* coordinate) {
	this->coordinate = coordinate;
}