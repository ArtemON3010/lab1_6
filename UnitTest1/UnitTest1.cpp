#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab1_6/Rational1.h"
#include "../Lab1_6/Rational1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational1::Pair a, b;
			Rational1 f;
			a.Init(3, 4);
			b.Init(1, 2);

			double res1, res2;
			res1 = f.ComparePairs(a, b);
			res2 = f.ComparePairs(a, b);
			Assert::AreEqual(res1, 1.0);
			Assert::AreEqual(res2, 1.0);
		}
	};
}
