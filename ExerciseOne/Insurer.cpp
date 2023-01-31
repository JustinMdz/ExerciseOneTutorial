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

int Insurer::searchCostumer(string costumer_Id) {
	for (int i = 0; i < costumers; i++) {
		if (costumersList[i]->getIdCustomer() == costumer_Id) {
			return i;
		}
	}
	return -1;
}

bool Insurer::addVehicleInsurance(string costumer_Id, string plate, double insurance_Amount) {
	if (insurances < SEG) {
		if (searchCostumer(costumer_Id) != -1){
			vehiclesInsurance[insurances].setIdCostumer(costumer_Id);
			vehiclesInsurance[insurances].setLicensePlate(plate);
			vehiclesInsurance[insurances].setInsuranceAmount(insurance_Amount);
			insurances++;
			
			return true;
		}
	}
	return false;
}

void Insurer::getInsuranceAmount(string costumer_Id) {
	cout << "Lista de seguros de vehiculos asociados a la cedula: " << costumer_Id << endl;
	for (int i = 0; i < insurances; i++) {
		if (vehiclesInsurance[i].getIdCostumer() == costumer_Id) {
			cout << "Vehiculo con placa: " << vehiclesInsurance[i].getLicensePlate();
			cout << ", monto del seguro: " << vehiclesInsurance[i].getInsuranceAmount()<<endl;
		}
	}
}

string Insurer::getOwnVehicleName(string plate) {
	string costumer_Id = "";
	
	for (int i = 0; i < insurances; i++) {
		if (vehiclesInsurance[i].getLicensePlate() == plate) {
			costumer_Id = vehiclesInsurance[i].getIdCostumer();
			break;
		}
	}

	if (costumer_Id != "") {
		int index = searchCostumer(costumer_Id);
		if (index != -1)
			return costumersList[index]->getName();
		else
			return "No existe un cliente asociado a esa placa";
	}
	return "Placa no existe";
}
