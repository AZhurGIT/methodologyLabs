#include "stdafx.h"

#include "Credit.h"


Credit::Credit()
{
	mp = new annuityPayment();
}

Credit::Credit(float Sum, unsigned int Months, float Rate,bool Type)
{
	balance = allSum = Sum;
	months = allMonths = Months;
	rate = Rate;
	monthRate = rate / 12 * 0.01;
	if (Type)
		mp = new differentialPayment();
	else 
		mp = new annuityPayment();
}

Credit::~Credit()
{
	delete mp;
}

float Credit::repayment(unsigned int Month)
{
	float payment = mp->repayment(Month, allMonths, allSum, rate);
	balance = balance - payment + balance * monthRate;
	months = allMonths - Month;
	return payment;
}

float Credit::repaymentDiff(unsigned int Month)
{
	float payment = allSum / allMonths + allSum *(allMonths - Month + 1) * monthRate/allMonths;
	return payment;
}

float Credit::repaymentAnn(unsigned int Month)
{
	float payment = allSum * monthRate/(1-1/pow(1 + monthRate,allMonths));
	return payment;
}

