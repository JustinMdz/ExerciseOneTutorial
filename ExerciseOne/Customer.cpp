#include "Customer.h"

Customer::Customer() {
	name = "";
	idCustomer = "";
}

void Customer::setName(string name) {
	this->name = name;
}

string Customer::getName() {
	return name;
}

void Customer::setIdCustomer(string idCustomer) {
	this->idCustomer = idCustomer;
}

string Customer::getIdCustomer() {
	return idCustomer;
}
