// Lab3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include "Client.h"
#include "Credit.h"
#include "monthPayment.h"

int main()
{
	bool repaymentType = true;
	unsigned int creditSum = 10000;
	Credit* testCredit = new Credit(creditSum, 6, 15,true);
	printf("Get credit: $%d, %d Months, %.2f%%\n",creditSum,testCredit->getMonths(),testCredit->getRate());
	for (int i = 1; i < 7; ++i)
	{
		printf("Repayment %d: %.2f\n", i, testCredit->repayment(i));
	}
	printf("Closing balance: %.2f\n", testCredit->getBalance());
	printf("Press enter to exit\n");
	getchar();
    return 0;
}

