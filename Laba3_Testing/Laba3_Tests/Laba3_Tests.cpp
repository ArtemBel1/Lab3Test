#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba3_Logic/Log.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Laba3Tests
{
	TEST_CLASS(Laba3Tests)
	{
	public:
		
		TEST_METHOD(TestRandom1)
		{
			//arrange
			Log* rand = new Log();
			
			//act
			int x = rand->randomNumber();

			//assert
			Assert::AreEqual(5, x);
		}
	};
}
