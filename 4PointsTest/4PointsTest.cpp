#include "pch.h"
#include "CppUnitTest.h"

typedef struct pairs {
	int x;
	int y;
}PAIRS;

extern "C" float getRectangleArea(PAIRS, PAIRS, PAIRS, PAIRS);
extern "C" float getRectanglePerimeter(PAIRS, PAIRS, PAIRS, PAIRS);
extern "C" float getLengthBetweenPoints(PAIRS, PAIRS);
extern "C" bool isValidRectangle(PAIRS, PAIRS, PAIRS, PAIRS);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My4PointsTest
{
	TEST_CLASS(My4PointsTest)
	{
	public:
		
		TEST_METHOD(LengthBetweenFunctionality)
		{
			PAIRS a;
			a.x = 0;
			a.y = 0;
			
			PAIRS b;
			b.x = 0;
			b.y = 8;

			// Testing method getLengthBetweenPoints(a, b) = 8
			float result = getLengthBetweenPoints(a, b);
			Assert::AreEqual((float)8, result);

			// Testing method getLengthBetweenPoints(a, b) = 0
			a.y = 8;
			result = getLengthBetweenPoints(a, b);
			Assert::AreEqual((float)0, result);

			// Testing method getLengthBetweenPoints(a, b) = 8
			b.x = 8;
			result = getLengthBetweenPoints(a, b);
			Assert::AreEqual((float)8, result);

			// Testing method getLengthBetweenPoints(a, b) = 0
			a.x = 8;
			result = getLengthBetweenPoints(a, b);
			Assert::AreEqual((float)0, result);
		}

		TEST_METHOD(isValidRectangleFunctionality)
		{
			PAIRS a; //(0,0)
			a.x = 0;
			a.y = 0;

			PAIRS b; //(0,8)
			b.x = 0;
			b.y = 8;

			PAIRS c; //(4,0)
			c.x = 4;
			c.y = 0;

			PAIRS d; //(4,8)
			d.x = 4;
			d.y = 8;

			// Testing method isValidRectangle = true
			bool result = isValidRectangle(a, b, c, d);
			Assert::IsTrue(result);
			result = isValidRectangle(d, a, b, c);
			Assert::IsTrue(result);
			result = isValidRectangle(c, d, a, b);
			Assert::IsTrue(result);
			result = isValidRectangle(b, c, d, a);
			Assert::IsTrue(result);

			d.x = 8;
			d.y = 4;

			// Testing method isValidRectangle = false
			result = isValidRectangle(a, b, c, d);
			Assert::IsFalse(result);
			result = isValidRectangle(d, a, b, c);
			Assert::IsFalse(result);
			result = isValidRectangle(c, d, a, b);
			Assert::IsFalse(result);
			result = isValidRectangle(b, c, d, a);
			Assert::IsFalse(result);
		}

		TEST_METHOD(getRectangleAreaFunctionality)
		{
			PAIRS a; //(0,0)
			a.x = 0;
			a.y = 0;

			PAIRS b; //(15,0)
			b.x = 15;
			b.y = 0;

			PAIRS c; //(0,15)
			c.x = 0;
			c.y = 15;

			PAIRS d; //(15,15)
			d.x = 15;
			d.y = 15;

			//testing method getRectangleArea = 225
			float result = getRectangleArea(a, b, c, d);
			Assert::AreEqual((float)225, result);
			result = getRectangleArea(d, a, b, c);
			Assert::AreEqual((float)225, result);
			result = getRectangleArea(c, d, a, b);
			Assert::AreEqual((float)225, result);
			result = getRectangleArea(b, c, d, a);
			Assert::AreEqual((float)225, result);

		}
		TEST_METHOD(getRectanglePerimiterFunctionality)
		{
			PAIRS a; //(0,0)
			a.x = 0;
			a.y = 0;

			PAIRS b; //(15,0)
			b.x = 15;
			b.y = 0;

			PAIRS c; //(0,15)
			c.x = 0;
			c.y = 15;

			PAIRS d; //(15,15)
			d.x = 15;
			d.y = 15;

			//testing method getRectanglePerimiter = 60
			float result = getRectanglePerimeter(a, b, c, d);
			Assert::AreEqual((float)60, result);
			result = getRectanglePerimeter(d, a, b, c);
			Assert::AreEqual((float)60, result);
			result = getRectanglePerimeter(c, d, a, b);
			Assert::AreEqual((float)60, result);
			result = getRectanglePerimeter(b, c, d, a);
			Assert::AreEqual((float)60, result);
		}
	};
}
