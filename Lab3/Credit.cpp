#include "stdafx.h"
#include "Credit.h"


Credit_new::Credit_new()
{

}

Credit_new::Credit_new(float Sum)
{
	balance = allSum = Sum;
}

Credit_new::~Credit_new()
{
}

float Credit_new::repayment(unsigned int Month,unsigned int AllMonths, float Rate)
{
	float monthRate = Rate / 12 * 0.01;
	float payment = allSum / AllMonths + allSum *(AllMonths - Month + 1) * monthRate/AllMonths;

	balance = balance - payment;
	return payment;
}
