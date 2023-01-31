#include "VehicleInsurance.h"

VehicleInsurance::VehicleInsurance() {
	this->licensePlate = "";
}

VehicleInsurance::VehicleInsurance(string idCustumer, double amount,string licensePlate): Insurance(idCustumer, amount) {
	this->licensePlate = licensePlate;
}

void VehicleInsurance::setLicensePlate(string licensePlate) {
	this->licensePlate = licensePlate;
}

string VehicleInsurance::getLicensePlate() {
	return licensePlate;
}