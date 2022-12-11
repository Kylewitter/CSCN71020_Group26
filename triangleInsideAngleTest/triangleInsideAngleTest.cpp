#include "pch.h"
#include "CppUnitTest.h"



extern "C" int giveTriangleAngles(int*);

#define PI 3.14159

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace triangleInsideAngleTest
{
	TEST_CLASS(triangleInsideAngleTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			// Testing functionality of Angle A, B and C for an equilateral triangle
			
			// Code is taken directly from function, because function is a void.
			// The actual and expected are the same result, but test case is saying it has failed.
			double result = 0;
			int* angles = new int[3];
			angles[0] = 60;
			angles[1] = 60;
			angles[2] = 60;
			float angleALength;
			float aSquared = angles[0] * angles[0];
			float bSquared = angles[1] * angles[1];
			float cSquared = angles[2] * angles[2];
			float BtimesC = 2 * angles[1] * angles[2];
			angleALength = (bSquared + cSquared - aSquared) / BtimesC;
			float angleA = acos(angleALength);
			Assert::AreEqual((float)1.0472, angleA);
			float angleBLength;
			float angleB;
			float AtimesC = 2 * angles[0] * angles[2];
			angleBLength = (cSquared + aSquared - bSquared) / AtimesC;
			angleB = acos(angleBLength);
			Assert::AreEqual((float)1.0472, angleB);
			float angleC = PI - angleA - angleB;
			Assert::AreEqual((float)1.0472, angleC);

		}

		
	};
}
