#include "stdafx.h"



#include "monthPayment.h"
#include "Credit.h"
#include "Client.h"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

namespace Lab5
{
	[TestClass]
	public ref class TestCredit
	{
	private:
		TestContext^ testContextInstance;

	public: 
		/// <summary>
		///Получает или устанавливает контекст теста, в котором предоставляются
		///сведения о текущем тестовом запуске и обеспечивается его функциональность.
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

		#pragma region Additional test attributes
		//
		//При написании тестов можно использовать следующие дополнительные атрибуты:
		//
		//ClassInitialize используется для выполнения кода до запуска первого теста в классе
		//[ClassInitialize()]
		//static void MyClassInitialize(TestContext^ testContext) {};
		//
		//ClassCleanup используется для выполнения кода после завершения работы всех тестов в классе
		//[ClassCleanup()]
		//static void MyClassCleanup() {};
		//
		//TestInitialize используется для выполнения кода перед запуском каждого теста
		//[TestInitialize()]
		//void MyTestInitialize() {};
		//
		//TestCleanup используется для выполнения кода после завершения каждого теста
		//[TestCleanup()]
		//void MyTestCleanup() {};
		//
		#pragma endregion 

		[TestMethod]
		void TestAnnuityPaymentRepaiment()
		{
			annuityPayment* TestAnnuityPayment = new annuityPayment();
			for (int i = 1; i < 7; ++i)
			{
				Assert::IsTrue(fabs(TestAnnuityPayment->repayment(i, 6, 10000, 15) - 1740.3381) < 0.01);
			}
			delete TestAnnuityPayment;
		};

		[TestMethod]
		void TestDifferentialPaymentRepaiment()
		{
			differentialPayment* TestDifferentialPayment = new differentialPayment();
			float payments[6] = { 1791.67,1770.83,1750.0,1729.17,1708.33,1687.5 };
			for (int i = 1; i < 7; ++i)
			{
				Assert::IsTrue(fabs(TestDifferentialPayment->repayment(i, 6, 10000, 15) - payments[i - 1]) < 0.01);
			}
			delete TestDifferentialPayment;
		};

		[TestMethod]
		void TestClientName()
		{
			std::string testName = "Имя";
			Client* TestClient = new Client();
			TestClient->setName(testName);
			Assert::IsFalse(testName.compare(TestClient->getName()));
			delete TestClient;
		};

		[TestMethod]
		void TestClientSurname()
		{
			std::string testSurname = "Фамилия";
			Client* TestClient = new Client();
			TestClient->setSurname(testSurname);
			Assert::IsFalse(testSurname.compare(TestClient->getSurname()));
			delete TestClient;

		};
		[TestMethod]
		void TestClientPatronymic()
		{
			std::string testPatronymic = "Отчество";
			Client* TestClient = new Client();
			TestClient->setPatronymic(testPatronymic);
			Assert::IsFalse(testPatronymic.compare(TestClient->getPatronymic()));
			delete TestClient;
		};

		[TestMethod]
		void TestClientFullName()
		{
			std::string testName = "Имя";
			std::string testPatronymic = "Отчество";
			std::string testSurname = "Фамилия";
			std::string testFullName = "Имя Отчество Фамилия";
			Client* TestClient = new Client();
			TestClient->setName(testName);
			TestClient->setPatronymic(testPatronymic);
			TestClient->setSurname(testSurname);
			Assert::IsFalse(testFullName.compare(TestClient->getFullName()));
			delete TestClient;
		};


	};
}
