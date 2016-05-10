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
		printf("Repayment %d: %.2f\n", i, testCredit->repayment(i));
	}
	printf("Press enter to exit\n");
	getchar();
    return 0;
}

