#pragma once
struct Coordinate {
public:
	int coordX;
	int coordY;
	const int MaxValueCoordinates = 8;
	const int MinValueCoordinates = 1;

	Coordinate();
	Coordinate(int, int);
	Coordinate(const Coordinate&);
	bool isValid();
	bool comparison(Coordinate*);

};

