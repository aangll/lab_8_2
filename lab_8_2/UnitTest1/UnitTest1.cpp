#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8_2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = "AaBb34.,h 65hvndttj";
			string t;
			t = Delete(str);
			Assert::AreEqual(t, Delete(str) = "AaBb34h65hvndttj");
		}
	};
}
