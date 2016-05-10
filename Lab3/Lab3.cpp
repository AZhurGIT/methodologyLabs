// Lab3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include "Client.h"
#include "Credit.h"


int main()
{
	Credit* testCredit = new Credit(10000);
	printf("Get credit: $10000, 6 Months, 15%%\n");
	for (int i = 1; i < 7; ++i)
	{
		printf("Repayment %d: %.2f\n", i, testCredit->repayment(i, 6, 15));
	}
	printf("Press enter to exit");
	getchar();
    return 0;
}

