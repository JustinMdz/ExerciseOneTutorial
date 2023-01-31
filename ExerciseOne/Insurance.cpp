#include "Insurance.h"

Insurance::Insurance() {
	costumerId = "";
	this->insuranceAmount = 0.0f;
}

Insurance::Insurance(string costumer_Id, double insurance_Amount) {
	costumerId = costumer_Id;
	insuranceAmount = insurance_Amount;
}

void Insurance::setCostumerId(string costumer_Id) {
	this->costumerId = costumer_Id;
}

string Insurance::getCostumerId() {
	return costumerId;
}

void Insurance::setInsuranceAmount(double insurance_Amount) {
	this->insuranceAmount = insurance_Amount;
}

double Insurance::getInsuranceAmount() {
	return insuranceAmount;
}