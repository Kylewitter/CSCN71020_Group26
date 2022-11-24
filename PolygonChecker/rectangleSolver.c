#include "rectangleSolver.h"
#include<stdio.h>
#include<math.h>

bool isValidRectangle(PAIRS a, PAIRS b, PAIRS c, PAIRS d) // e.l - created function
{
	
}

int getLengthBetweenPoints(PAIRS x, PAIRS y)
{
	int arg1 = (y.x - x.x) * (y.x - x.x);
	int arg2 = (y.y - x.y) * (y.y - x.y);

	return sqrt(arg1 + arg2);
}