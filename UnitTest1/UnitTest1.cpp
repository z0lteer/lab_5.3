#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.3/5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x1 = 2.0;
			double expected1 = (cos(x1) + 1) / (exp(x1) + pow(sin(x1), 2));
			Assert::AreEqual(expected1, t(x1), 0.0001, L"Error in t(x) for |x| >= 1");

		}
	};
}
