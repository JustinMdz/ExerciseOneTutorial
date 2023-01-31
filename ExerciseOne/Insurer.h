#pragma once
#include <iostream>
#include "Customer.h"
#include "VehicleInsurance.h"

#define CLI 2000
#define SEG 1000
using namespace std;

class Insurer 
{
private:
	Customer *costumersList[CLI];
	VehicleInsurance vehicleInsurances[SEG];
	int costumers, insurances;

public:
	Insurer();
	void addCostumer(Customer*);
	int searchCustomer(string);
	bool addVehicleInsurance(string, string, double);
	string getOwnVehicleName(string);
	void getInsuranceAmount(string);
};
