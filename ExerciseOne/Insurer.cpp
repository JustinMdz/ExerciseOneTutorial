#include "Insurer.h"

Insurer::Insurer() {
	costumers = 0;
	insurances = 0;

	for (int i = 0; i < SEG; i++) {
		costumersList[i] = NULL;
	}
}

void Insurer::addCostumer(Customer* costumer) {
	if (costumers < CLI) {
		costumersList[costumers] = costumer;
		costumers++;
	}
}

int Insurer::searchCustomer(string costumer_Id) {
	for (int i = 0; i < costumers; i++) {
		if (costumersList[i]->getIdCustomer() == costumer_Id) {
			return i;
		}
	}
	return -1;
}

bool Insurer::addVehicleInsurance(string costumer_Id, string plate, double insurance_Amount) {
	if (insurances < SEG) {
		if (searchCustomer(costumer_Id) != -1){
			vehicleInsurances[insurances].setCostumerId(costumer_Id);
			vehicleInsurances[insurances].setLicensePlate(plate);
			vehicleInsurances[insurances].setInsuranceAmount(insurance_Amount);
			insurances++;
			
			return true;
		}
	}
	return false;
}

void Insurer::getInsuranceAmount(string costumer_Id) {
	cout << "Lista de seguros de vehiculos asociados a la cedula: " << costumer_Id << endl;
	for (int i = 0; i < insurances; i++) {
		if (vehicleInsurances[i].getCostumerId() == costumer_Id) {
			cout << "Vehiculo con placa: " << vehicleInsurances[i].getLicensePlate();
			cout << ", monto del seguro: " << vehicleInsurances[i].getInsuranceAmount()<<endl;
		}
	}
}

string Insurer::getOwnVehicleName(string plate) {
	string costumer_Id = "";
	
	for (int i = 0; i < insurances; i++) {
		if (vehicleInsurances[i].getLicensePlate() == plate) {
			costumer_Id = vehicleInsurances[i].getCostumerId();
			break;
		}
	}

	if (costumer_Id != "") {
		int index = searchCustomer(costumer_Id);
		if (index != -1)
			return costumersList[index]->getName();
		else
			return "No existe un cliente asociado a esa placa";
	}
	return "Placa no existe";
}
