#include "pch.h"
#include "CppUnitTest.h"
#include "../2.3/Point.h"
#include "../2.3/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest23
{
	TEST_CLASS(UnitTest23)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			Point A(1,1);
			A.SetX(1);
			int test = A.GetX();
			Assert::AreEqual(test, 1);
		}
	};
}
