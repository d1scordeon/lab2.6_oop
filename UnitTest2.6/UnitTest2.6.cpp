#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Kateryna Artemovska\source\repos\lab_2.6_oop\LorryC.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest26
{
	TEST_CLASS(UnitTest26)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Lorry t;
			t.setPower(40000);
			int power = t.getPower();
			Assert::AreEqual(power, 40000);
		}
	};
}
