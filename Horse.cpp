#include "Horse.h"

Horse::Horse() {
	this->coordinate = new Coordinate();
}

Horse::Horse(Coordinate* coordinate) {
	this->coordinate = coordinate;
}