#pragma once
class Credit
{
public:
	Credit();
	Credit(float Sum,unsigned int Months=36, float Rate=17);
	virtual ~Credit();

	float repayment(unsigned int Month);
	void setMonths(unsigned int Months) {allMonths = Months; }
	unsigned int getMonths(void) { return allMonths;}
	void setRate(float Rate) { rate = Rate; }
	float getRate(void) { return rate; }
private:
	float balance;
	float allSum;
	unsigned int months;
	unsigned int allMonths;
	float rate;
};

