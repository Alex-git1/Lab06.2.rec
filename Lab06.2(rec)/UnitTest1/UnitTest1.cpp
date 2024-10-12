#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab06.2(rec)/Lab06.2(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int arr[n];
			int Low = -10, High = 14;

			Create(arr, n, Low, High);

			for (int i = 0; i < n; i++) {
				Assert::IsTrue(arr[i] >= Low && arr[i] <= High, L"Element out of range");
			}
		}
	};
}
