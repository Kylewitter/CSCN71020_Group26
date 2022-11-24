#pragma once
#include <stdbool.h> // e.l

typedef struct pairs {
	int x;
	int y;
}PAIRS;

bool isValidRectangle(PAIRS a, PAIRS b, PAIRS c, PAIRS d);  // e.l 

int getLengthBetweenPoints(PAIRS, PAIRS);

void getFourPoints();

void getRectangleArea(); // k.w

void getRectanglePerimeter(); // k.w
