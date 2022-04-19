#include "pch.h"
#include "CppUnitTest.h"
#include "c:\users\misha\source\repos\1.3oop\1.3oop\1.3oop.cpp"
#include "c:\users\misha\source\repos\1.3oop\1.3oop\Money.h"
#include "C:\Users\Misha\source\repos\1.3oop\1.3oop\Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money l;

			l.setGrn(10);
			l.setKop(50);
			double result = l.multiply(2, l);
			Assert::AreEqual(result, 21.0);
		}
	};
}
