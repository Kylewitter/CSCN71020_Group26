#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "main.h"
#include "triangleSolver.h"
#include "rectangleSolver.h"

#define PI    3.14159
#define NUMBEROFTRIANGLESIDES 3
#define START 0

int side = 0;

int main() {
	bool continueProgram = true;
	while (continueProgram) {
		printWelcome();

		int shapeChoice = printShapeMenu();

		switch (shapeChoice)
		{
		case 2:
			printf_s("Rectangle selected.\n"); // B.K
			
			PAIRS p1 = CreatePair(scanY(), scanX());
			PAIRS p2 = CreatePair(scanY(), scanX());
			PAIRS p3 = CreatePair(scanY(), scanX());
			PAIRS p4 = CreatePair(scanY(), scanX());
			
			if (isValidRectangle(p1, p2, p3, p4))
				getRectangleArea(p1,p2,p3);
			
			break;
			
		case 1:
			printf_s("Triangle selected.\n");
			int triangleSides[NUMBEROFTRIANGLESIDES] = { 0, 0, 0 };
			int* triangleSidesPtr = getTriangleSides(triangleSides);
			//printf_s("! %d\n", triangleSidesPtr[0]);
			
			if (IsValidTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2])) //BK implementaion of valid triangle detection
			{
				printf("Triangle is valid\n");
				char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
				printf_s("%s\n", result);
				giveTriangleAngles(triangleSides);
				break;
			}
			else
			{
				printf("Triangle is not valid\n");
				break;
			}

			
			
		case 0:
			continueProgram = false;
			break;
		default:
			printf_s("Invalid value entered.\n");
			break;
		}
	}
	return 0;
}

void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Polygon Checker  **\n");
	printf_s(" **********************\n");
}

int printShapeMenu() {
	printf_s("2. Rectangle\n");
	printf_s("1. Triangle\n");
	printf_s("0. Exit\n");

	int shapeChoice;

	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}

int* getTriangleSides(int* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = START; i < 3; i++)
	{
		scanf_s("%d", &triangleSides[i]);
	}
	return triangleSides;
}
int giveTriangleAngles(int* triangleSides) {
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


}