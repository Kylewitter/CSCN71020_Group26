#pragma once
#include <stdbool.h> // e.l

typedef struct pairs {
	int x;
	int y;
}PAIRS;

bool isValidRectangle(PAIRS a, PAIRS b, PAIRS c, PAIRS d);  // e.l 

float getLengthBetweenPoints(PAIRS, PAIRS);

PAIRS CreatePair(int, int); // M.B

int scanX(); // e.l

int scanY(); // e.l

void getFourPoints();

void getRectangleArea(); // k.w

int getRectanglePerimeter(); // k.w


