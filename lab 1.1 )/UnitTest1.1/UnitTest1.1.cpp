#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.1 )/Number.h"
#include "../lab 1.1 )/Number.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
	TEST_CLASS(UnitTest11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number a;
			a.Init(2, 7);
		    int test = a.GetFirst();
			Assert::AreEqual(test, 2);
		
		}
	};
}
