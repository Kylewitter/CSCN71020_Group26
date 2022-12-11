#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* analyzeTriangle(int, int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace triangleTypeTest
{
	TEST_CLASS(triangleTypeTest)
	{
	public:
		
		TEST_METHOD(NotATriangleTest)
		{
			// This is testing the analyzeTriangle Function using -1, 34, -6, // e.l
			char* result = "";
			result = analyzeTriangle(-1, 34, -6);
			Assert::AreEqual("Not a triangle",result);
			
		}

		TEST_METHOD(EquilateralTest)
		{
			// This is testing the analyzeTriangle Function using 6,6,6 // e.l
			char* result = "";
			result = analyzeTriangle(6, 6, 6);
			Assert::AreEqual("Equilateral triangle", result);
		}

		TEST_METHOD(IsoscelesTest)
		{
			// This is testing the analyzeTriangle Function using 2,2,3 // e.l
			char* result = "";
			result = analyzeTriangle(2, 2, 3);
			Assert::AreEqual("Isosceles triangle", result);
		}

		TEST_METHOD(ScaleneTest)
		{
			// This is testing the analyzeTriangle Function using 2,3,4 // e.l
			char* result = "";
			result = analyzeTriangle(2, 3, 4);
			Assert::AreEqual("Scalene triangle", result);
		}
	};
}
