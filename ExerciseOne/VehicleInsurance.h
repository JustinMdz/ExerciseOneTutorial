#pragma once
#include <iostream>
using namespace std;

class VehicleInsurance
{
	private:
		string licensePlate;

	public:
		VehicleInsurance();
		VehicleInsurance(string, double, string);
		void setLicensePlate(string);
		string getLicensePlate();
};
