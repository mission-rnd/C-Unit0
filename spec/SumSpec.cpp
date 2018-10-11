#include "stdafx.h"


#include "./../src/Sum.cpp"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace spec
{
	[TestClass]
	public ref class SumSpec
	{
	private:
		TestContext^ testContextInstance;

	public:
		/// <summary>
		///Gets or sets the test context which provides
		///information about and functionality for the current test run.
		///</summary>
		property Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ TestContext
		{
			Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ get()
			{
				return testContextInstance;
			}
			System::Void set(Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ value)
			{
				testContextInstance = value;
			}
		};

		[TestMethod, Timeout(3000)]
		void Sum_Test1()
		{
			int actual = sum(2, 3);
			int expected = 5;
			Assert::AreEqual(expected, actual, L"Sum(2, 3) failed", 1, 2);
		}

		[TestMethod, Timeout(3000)]
		void Sum_Test2()
		{
			int actual = sum(-2, 5);
			int expected = 3;
			Assert::AreEqual(expected, actual, L"Sum(-2, 5) failed", 1, 2);
		}
	};
}
