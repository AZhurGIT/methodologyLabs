#include "stdafx.h"
#include "monthPayment.h"


monthPayment::monthPayment()
{
}

monthPayment::~monthPayment()
{
}


annuityPayment::annuityPayment()
{
}

annuityPayment::~annuityPayment()
{
}

float annuityPayment::repayment(unsigned int Month, unsigned int AllMonths, float AllSum, float Rate)
{
	float monthRate =Rate / 12 * 0.01;
	float payment = AllSum * monthRate / (1 - 1 / pow(1 + monthRate, AllMonths));

	return payment;
}


differentialPayment::differentialPayment()
{
}

differentialPayment::~differentialPayment()
{
}

float differentialPayment::repayment(unsigned int Month, unsigned int AllMonths, float AllSum, float Rate)
{
	float monthRate = Rate / 12 * 0.01;
	float payment = AllSum / AllMonths + AllSum *(AllMonths - Month + 1) * monthRate / AllMonths;

	return payment;
}
