#include "pch.h"
#include "CppUnitTest.h"
#include "../Object.cpp"
#include "../Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number a(5);
			int t = Object::Count();
			Assert::AreEqual(t, 1);
		}
	};
}
