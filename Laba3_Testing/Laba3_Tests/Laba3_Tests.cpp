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

		TEST_METHOD(TestComparison2)
		{
			//arrange
			Log* rand = new Log();

			//act
			int x = rand->comparison(1, 2);

			//assert
			Assert::AreEqual(1, x);
		}
	};
}
