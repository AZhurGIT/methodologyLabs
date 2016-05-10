#pragma once
class Credit
{
public:
	Credit();
	Credit(float Sum);
	virtual ~Credit();

	float repayment(unsigned int Month, unsigned int AllMonths, float Rate);
private:
	float balance;
	float allSum;
	unsigned int months;
};

