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
	monthRate = rate / 12 * 0.01;
}

Credit::~Credit()
{
}

float Credit::repayment(unsigned int Month,bool Type)
{
	return Type ? repaymentDiff(Month) : repaymentAnn(Month);
}

float Credit::repaymentDiff(unsigned int Month)
{
	float payment = allSum / allMonths + allSum *(allMonths - Month + 1) * monthRate/allMonths;

	balance = balance - payment + balance * monthRate;
	months = allMonths - Month;
	return payment;
}

float Credit::repaymentAnn(unsigned int Month)
{
	float payment = allSum * monthRate/(1-1/pow(1 + monthRate,allMonths));
	balance = balance - payment + balance * monthRate;
	months = allMonths - Month;
	return payment;
}

