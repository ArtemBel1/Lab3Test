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
			Assert::AreEqual(true, x > 0);
			Assert::AreEqual(true, x < 21);
		}

		TEST_METHOD(TestRandom2)
		{
			//arrange
			Log* rand = new Log();

			//act
			int x = rand->randomNumber();
			int x1 = rand->randomNumber();

			//assert
			Assert::AreEqual(true, x1 > 0);
			Assert::AreEqual(true, x1 < 21);
		}

		TEST_METHOD(TestRandom3)
		{
			//arrange
			Log* rand = new Log();

			//act
			int x = rand->randomNumber();
			int x1 = rand->randomNumber();
			int x2 = rand->randomNumber();

			//assert
			Assert::AreEqual(true, x2 > 0);
			Assert::AreEqual(true, x2 < 21);
		}

		TEST_METHOD(TestComparison1)
		{
			//arrange
			Log* rand = new Log();

			//act
			int x = rand->comparison(1, 2);

			//assert
			Assert::AreEqual(1, x);
		}

		TEST_METHOD(TestComparison2)
		{
			//arrange
			Log* rand = new Log();

			//act
			int x = rand->comparison(2, 2);

			//assert
			Assert::AreEqual(3, x);
		}

		TEST_METHOD(TestComparison3)
		{
			//arrange
			Log* rand = new Log();

			//act
			int x = rand->comparison(3, 2);

			//assert
			Assert::AreEqual(2, x);
		}
	};
}
