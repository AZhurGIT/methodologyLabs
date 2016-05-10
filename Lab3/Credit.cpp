#include "stdafx.h"
#include "Credit.h"


Credit::Credit()
{

}

Credit::Credit(float Sum, unsigned int Months, float Rate)
{
	balance = allSum = Sum;
	months = allMonths = Months;
	rate = Rate;
}

Credit::~Credit()
{
}

float Credit::repayment(unsigned int Month)
{
	float monthRate = rate / 12 * 0.01;
	float payment = allSum / allMonths + allSum *(allMonths - Month + 1) * monthRate/allMonths;

	balance = balance - payment;
	months = allMonths - Month;
	return payment;
}
