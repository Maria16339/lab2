#include "pch.h"
#include "CppUnitTest.h"
#include "C:\\Users\User\source\repos\2.1\2.1\Money.h"
#include "C:\\Users\User\source\repos\2.1\2.1\Money.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest21
{
	TEST_CLASS(UnitTest21)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money b(2, 3);
			int test = b.summa();
			Assert::AreEqual(6, test);
		}
	};
}
