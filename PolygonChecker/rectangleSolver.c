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

int getLengthBetweenPoints(PAIRS x, PAIRS y) // B.K
{
	int arg1 = (y.x - x.x) * (y.x - x.x);
	int arg2 = (y.y - x.y) * (y.y - x.y);

	return sqrt(arg1 + arg2);
}

 int scanX() // e.l
{
	 int x;
	 printf("Enter x value for point");
	 scanf_s("%d", &x);
	 
	 return x;
}
 int scanY() // e.l
 {
	 int y;
	 printf("Enter y value for point");
	 scanf_s("%d", &y);

	 return y;
 }

 PAIRS CreatePair(int x, int y) // M.B
 {
	 PAIRS pair;
	 pair.x = x;
	 pair.y = y;
 }
 

 void getRectangleArea(PAIRS p1, PAIRS p2, PAIRS p3)
 {
	 
	 int length = getLengthBetweenPoints(p1, p2);
	 int width = getLengthBetweenPoints(p1, p3);
	 int area = length * width;
	 printf("%d", area);


 }

 int getRectanglePerimeter()
 {

 }