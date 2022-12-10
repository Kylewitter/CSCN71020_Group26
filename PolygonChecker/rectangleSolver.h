#pragma once
#include <stdbool.h> // e.l

typedef struct pairs {
	int x;
	int y;
}PAIRS;

bool isValidRectangle(PAIRS, PAIRS, PAIRS, PAIRS);  // e.l 

float getLengthBetweenPoints(PAIRS, PAIRS);

PAIRS CreatePair(int, int); // M.B

int scanX(); // e.l

int scanY(); // e.l

void getFourPoints();

void getRectangleArea(PAIRS, PAIRS, PAIRS, PAIRS); // k.w + B.K

void getRectanglePerimeter(PAIRS, PAIRS, PAIRS, PAIRS); // k.w + B.K


