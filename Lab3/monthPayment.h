#pragma once
class monthPayment
{
public:
	monthPayment();
	virtual ~monthPayment();
	virtual void repayment(unsigned int Month)=0;
};

