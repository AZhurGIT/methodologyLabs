#pragma once
class monthPayment
{
public:
	monthPayment();
	virtual ~monthPayment();
	virtual float repayment(unsigned int Month, unsigned int AllMonths, float AllSum, float Rate)=0;
};

class annuityPayment : public monthPayment
{
public:
	annuityPayment();
	virtual ~annuityPayment();


	// ������������ ����� monthPayment
	virtual float repayment(unsigned int Month, unsigned int AllMonths, float AllSum, float Rate) override;

};

class differentialPayment : public monthPayment
{
public:
	differentialPayment();
	virtual ~differentialPayment();

	// ������������ ����� monthPayment
	virtual float repayment(unsigned int Month, unsigned int AllMonths, float AllSum, float Rate) override;
};