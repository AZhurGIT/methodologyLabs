#pragma once
class Credit
{
public:
	Credit();
	Credit(float Sum,unsigned int Months=36, float Rate=17);
	virtual ~Credit();

	float repaymentDiff(unsigned int Month);
	float repaymentAnn(unsigned int Month);
	float getBalance(void) { return balance; }
	void setMonths(unsigned int Months) { allMonths = Months; }
	unsigned int getMonths(void) { return allMonths;}
	void setRate(float Rate) { rate = Rate; monthRate = rate / 12 * 0.01;}
	float getRate(void) { return rate; }

private:
	float balance;
	float allSum;
	unsigned int months;
	unsigned int allMonths;
	float rate;
	float monthRate;
};

