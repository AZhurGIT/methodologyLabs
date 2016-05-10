// Lab3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include "Client.h"
#include "Credit.h"
#include "monthPayment.h"

int main()
{
	differentialPayment*  dp = new differentialPayment();
	annuityPayment* ap = new annuityPayment();
	bool repaymentType = true;
	unsigned int creditSum = 10000;
	Credit* testCredit = new Credit(creditSum, 6, 15);
	printf("Get credit: $%d, %d Months, %.2f%%\n",creditSum,testCredit->getMonths(),testCredit->getRate());
	for (int i = 1; i < 7; ++i)
	{
//		printf("Repayment diff %d: %.2f\n", i, testCredit->repaymentDiff(i));
//		printf("Repayment ann %d: %.2f\n", i, testCredit->repaymentAnn(i));
//		printf("Repayment %s %d: %.2f\n",repaymentType ? "diff": "ann", i, testCredit->repayment(i,repaymentType));
		printf("Repayment diff %d: %.2f\n", i, dp->repayment(i,testCredit->getMonths(),creditSum,testCredit->getRate()));
	}
	printf("Closing balance: %.2f\n", testCredit->getBalance());
	printf("Press enter to exit\n");
	getchar();
    return 0;
}

