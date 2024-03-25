#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP3.2/window.h"
#include "../OOP3.2/window.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest32
{
	TEST_CLASS(UnitTest32)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Window window(100, 50); 

			Assert::AreEqual(string("Window: 100x50"), static_cast<string>(window));
		
		}
	};
}
