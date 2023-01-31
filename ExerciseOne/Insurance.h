#pragma once
#include <iostream>
#include <string>
using namespace std;

class Insurance
{
private:

	string costumerId;
	float insuranceAmount;

public:
	Insurance();
	Insurance(string, double);
	void setCostumerId(string);
	string getCostumerId();
	void setInsuranceAmount(double);
	double getInsuranceAmount();
};
