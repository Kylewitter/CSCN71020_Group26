#define _CRT_SECURE_NO_WARNINGS
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

 int scanX()
{
	 int x;
	 printf("Enter x value for point");
	 scanf_s("%d", &x);
	 
	 return x;
}
 int scanY()
 {
	 int y;
	 printf("Enter y value for point");
	 scanf_s("%d", &y);

	 return y;
 }

 PAIRS CreatePair(int x, int y)
 {
	 PAIRS pair;
	 pair.x = x;
	 pair.y = y;
 }
 

 