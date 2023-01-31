#pragma once
#include <iostream>
#include "Insurance.h"
#include "Customer.h"

using namespace std;

class VehicleInsurance : public Insurance
{
	private:
		string licensePlate;

	public:
		VehicleInsurance();
		VehicleInsurance(string, double, string);
		void setLicensePlate(string);
		string getLicensePlate();
};

