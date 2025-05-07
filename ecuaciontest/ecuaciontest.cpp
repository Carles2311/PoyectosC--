#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/ConsoleApplication1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ecuaciontest
{
	TEST_CLASS(ecuaciontest)
 {
	public:
		
		TEST_METHOD(calculoTest)
		{
			a = -3;
			b = 4;
			c = 2;
			double raiz = sqrt((b * b) - (4 * a * c));
			calculos();
			Assert::AreEqual(6.32456 , raiz);
		}
		TEST_METHOD(resultadotest1)
		{
			a = 4;
			b = -3;
			c = 2;
			calculos();
			Assert::AreEqual(2.0, resultado);
		}
		TEST_METHOD(resultadotest2)
		{
			a = 4;
			b = -3;
			c = 2;
			calculos();
			Assert::AreEqual(1.0, resultado2);
		}
	};
}
