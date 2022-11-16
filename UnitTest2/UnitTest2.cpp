#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.1/Lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1);
	};
	inline void UnitTest2::TestMethod1()
	{
		int q;
		q = h(-1, 0);
		Assert::AreEqual(q, -1);
	}
}
