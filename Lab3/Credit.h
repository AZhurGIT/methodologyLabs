#pragma once
class Credit_new
{
public:
	Credit_new();
	Credit_new(float Sum);
	virtual ~Credit_new();

	float repayment(unsigned int Month, unsigned int AllMonths, float Rate);
private:
	float balance;
	float allSum;
	unsigned int months;
};

