#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "triangleSolver.h"

#define PI    3.14159
#define START 0

int* getTriangleSides(int* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = START; i < 3; i++)
	{
		scanf_s("%d", &triangleSides[i]);
	}
	return triangleSides;
}

char* analyzeTriangle(int side1, int side2, int side3) {
	char* result = "";
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		result = "Not a triangle";
	}
	else if (side1 == side2 && side1 == side3) {
		result = "Equilateral triangle";
	}
	else if ((side1 == side2 && side1 != side3) || 
		(side1 == side3 && side1 != side2))
	{
		result = "Isosceles triangle";
	}
	else {
		result = "Scalene triangle";
	}

	return result;
}

bool IsValidTriangle(int side1, int side2, int side3) // bk checks to see if triangle lengths form a triangle
{
	if (side1 + side2 > side3 && side1 + side3 > side2 && side3 + side2 > side1)
		return true;

	else
		return false;
}
int giveTriangleAngles(int* triangleSides) { // e.l
	// added this function E.L
	triangleSides[2]; // needs three 
	float angleALength;
	float aSquared = triangleSides[0] * triangleSides[0];
	float bSquared = triangleSides[1] * triangleSides[1];
	float cSquared = triangleSides[2] * triangleSides[2];
	float BtimesC = 2 * triangleSides[1] * triangleSides[2];
	angleALength = (bSquared + cSquared - aSquared) / BtimesC;
	float angleA = acos(angleALength);
	printf("Angle A is: %.2f radians\n", angleA);
	float angleBLength;
	float angleB;
	float AtimesC = 2 * triangleSides[0] * triangleSides[2];
	angleBLength = (cSquared + aSquared - bSquared) / AtimesC;
	angleB = acos(angleBLength);
	printf("Angle B is %.2f radians\n", angleB);

	float angleC = PI - angleA - angleB;
	printf("Angle C is: %.2f radians\n", angleC);

	float angles[3] = { angleA,angleB,angleC};

	return angles;
}

