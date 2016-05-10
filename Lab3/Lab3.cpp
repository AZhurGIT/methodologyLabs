// Lab3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include "Client.h"
#include "Credit.h"


int main()
{
	Credit* testCredit = new Credit(10000, 6, 15);
	printf("Get credit: $10000, %d Months, %.2f%%\n",testCredit->getMonths(),testCredit->getRate());
	for (int i = 1; i < 7; ++i)
	{
//		printf("Repayment diff %d: %.2f\n", i, testCredit->repaymentDiff(i));
		printf("Repayment ann %d: %.2f\n", i, testCredit->repaymentAnn(i));
	}
	printf("Closing balance: %.2f\n", testCredit->getBalance());
	printf("Press enter to exit\n");
	getchar();
    return 0;
}

