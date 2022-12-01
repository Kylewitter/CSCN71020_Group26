#define _CRT_SECURE_NO_WARNINGS
#include "rectangleSolver.h"
#include<stdio.h>
#include<math.h>

bool isValidRectangle(PAIRS a, PAIRS b, PAIRS c, PAIRS d) // e.l - created function
{
	float lengthAB = getLengthBetweenPoints(a, b);
	float lengthAC = getLengthBetweenPoints(a, c);
	float lengthAD = getLengthBetweenPoints(a, d);
	float lengthBC = getLengthBetweenPoints(b, c);
	float lengthBD = getLengthBetweenPoints(b, d);
	float lengthCD = getLengthBetweenPoints(c, d);

	if (lengthAB == lengthCD)
	{
		if (lengthAC == lengthBD)
		{
			if (lengthAB != lengthAC)
			{
				if (((lengthAB * lengthAB) + (lengthAC * lengthAC)) == (lengthAD * lengthAD))
				{
					printf("Is a valid rectangle\n");
					return true;
				}
			}
		}
		
		if (lengthAD == lengthBC)
		{
			if (lengthAB != lengthAD)
			{
				if (((lengthAB * lengthAB) + (lengthAD * lengthAD)) == (lengthAC * lengthAC))
				{
					printf("Is a valid rectangle\n");
					return true;
				}
			}
		}
	}

	if (lengthAC == lengthBD)
	{
		if (lengthAD == lengthBC)
		{
			if (lengthAC != lengthAD)
			{
				if (((lengthAC * lengthAC) + (lengthAD * lengthAD)) == (lengthAB * lengthAB))
				{
					printf("Is a valid rectangle");
					return true;
				}
			}
		}
	}

	else
	{
		printf("Is not a valid rectangle");
		return false;
	}
}

float getLengthBetweenPoints(PAIRS a, PAIRS b) // B.K
{
	int arg1 = (b.x - a.x) * (b.x - a.x);
	int arg2 = (b.y - a.y) * (b.y - a.y);

	return (float)sqrt(arg1 + arg2);
}

 int scanX() // e.l
{
	 int x;
	 printf("Enter x value for point: ");
	 scanf_s("%d", &x);
	 
	 return x;
}
 int scanY() // e.l
 {
	 int y;
	 printf("Enter y value for point: ");
	 scanf_s("%d", &y);

	 return y;
 }

 PAIRS CreatePair(int y, int x) // M.B
 {
	 PAIRS pair;
	 pair.x = x;
	 pair.y = y;

	 return pair;
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