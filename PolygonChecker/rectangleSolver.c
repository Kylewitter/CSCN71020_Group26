#include "rectangleSolver.h"
#include<stdio.h>
#include<math.h>

bool isValidRectangle(PAIRS a, PAIRS b, PAIRS c, PAIRS d) // e.l - created function
{
	if (getLengthBetweenPoints(a, b) == getLengthBetweenPoints(c, d) && getLengthBetweenPoints(a, c) == getLengthBetweenPoints(b, d) && getLengthBetweenPoints(a, b) != getLengthBetweenPoints(a, c))
	{
		printf("Is a valid rectangle");
		return true;
	}
		
	else
	{
		printf("Is not a valid rectangle");
		return false;
	}
}

int getLengthBetweenPoints(PAIRS x, PAIRS y)
{
	int arg1 = (y.x - x.x) * (y.x - x.x);
	int arg2 = (y.y - x.y) * (y.y - x.y);

	return sqrt(arg1 + arg2);
}

 PAIRS* getFourPoints()
{
	PAIRS coordinates[4];
	for (int i = 0; i < 4; i++) {
		int x;
		printf("Please Enter x");
		scanf_s("%d", x);

		int y;
		printf("Please Enter y");
		scanf_s("%d", y);

		coordinates[i]=CreatePair(x, y);
	}
	return &coordinates;







}
