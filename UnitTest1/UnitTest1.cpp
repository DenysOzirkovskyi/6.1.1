#include "pch.h"
#include "CppUnitTest.h"
#include "../6,1 ітер.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			int q,m[5]={1,2,3,4,5};
			q = Sum(m,5);
			Assert::AreEqual(q, 15);

		}
	};
}
