#define _CRT_SECURE_NO_WARNINGS
#include "rectangleSolver.h"
#include<stdio.h>
#include<math.h>

bool isValidRectangle(PAIRS a, PAIRS b, PAIRS c, PAIRS d) // e.l - created function, B.K - fixed bugs
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
			
			else
			{
				printf("Is a valid square\n");
				return true;
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

			else
			{
				printf("Is a valid square\n");
				return true;
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
					printf("Is a valid rectangle\n");
					return true;
				}
			}

			else
			{
				printf("Is a valid square\n");
				return true;
			}
		}
	}

	else
	{
		printf("Is not a valid rectangle\n");
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
 

float getRectangleArea(PAIRS a, PAIRS b, PAIRS c, PAIRS d) // B.K
{
	float lengthAB = getLengthBetweenPoints(a, b);
	float lengthAC = getLengthBetweenPoints(a, c);
	float lengthAD = getLengthBetweenPoints(a, d);
	
	if (lengthAB > lengthAC && lengthAB > lengthAD)
	{
		printf("The area is: %.2f\n", (lengthAC * lengthAD));
		return (lengthAC * lengthAD);
	}

	else if (lengthAC > lengthAB && lengthAC > lengthAD)
	{
		printf("The area is: %.2f\n", (lengthAB * lengthAD));
		return (lengthAB * lengthAD);
	}

	else
	{
		printf("The area is: %.2f\n", (lengthAB * lengthAC));
		return (lengthAB * lengthAC);
	}
}

float getRectanglePerimeter(PAIRS a, PAIRS b, PAIRS c, PAIRS d) // B.k
{
	float lengthAB = getLengthBetweenPoints(a, b);
	float lengthAC = getLengthBetweenPoints(a, c);
	float lengthAD = getLengthBetweenPoints(a, d);

	if (lengthAB > lengthAC && lengthAB > lengthAD)
	{
		printf("The perimeter is: %.2f\n", (lengthAC * 2 + lengthAD * 2));
		return (lengthAC * 2 + lengthAD * 2);
	}

	else if (lengthAC > lengthAB && lengthAC > lengthAD)
	{
		printf("The perimeter is: %.2f\n", (lengthAB * 2 + lengthAD * 2));
		return (lengthAB * 2 + lengthAD * 2);

	}

	else
	{
		printf("The perimeter is: %.2f\n", (lengthAB * 2 + lengthAC * 2));
		return (lengthAB * 2 + lengthAC * 2);
	}
}