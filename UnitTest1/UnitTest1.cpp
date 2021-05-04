#include "pch.h"
#include "CppUnitTest.h"
#include "..\6.1\Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			Array a = Array(3);
			for (int i = 0; i < 3; i++)
				a[i] = 0;
			a[2] = 3;
			double o = a.MinNumber();
			Assert::AreEqual(o, 0.);
		}
	};
}