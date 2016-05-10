#pragma once
class monthPayment
{
public:
	monthPayment();
	virtual ~monthPayment();
	virtual void repayment(unsigned int Month)=0;
};

class annuityPayment : public monthPayment
{
public:
	annuityPayment();
	virtual ~annuityPayment();
	void repayment(unsigned int Month);
};

class differentialPayment : public monthPayment
{
public:
	differentialPayment();
	virtual ~differentialPayment();
	void repayment(unsigned int Month);
};