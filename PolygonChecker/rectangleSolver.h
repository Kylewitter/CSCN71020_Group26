#pragma once
#include <stdbool.h> // e.l

typedef struct pairs {
	int x;
	int y;
}PAIRS;

bool isValidRectangle(PAIRS,PAIRS,PAIRS,PAIRS );  // e.l 

int getLengthBetweenPoints(PAIRS, PAIRS); // B.K

PAIRS CreatePair(int,int); // M.B

int scanX(); // e.l

int scanY(); // e.l

void getRectangleArea(); // k.w

void getRectanglePerimeter(); // k.w
