#include <iostream>
#include "Customer.h"
#include "Insurer.h"
using namespace std;

int main() {

	Customer customer[200];

	customer[0].setIdCustomer("123456789");
	customer[0].setName("Pedro Villareal");

	customer[1].setIdCustomer("987654321");
	customer[1].setName("Maritza Guadamuz");

	customer[2].setIdCustomer("123459876");
	customer[2].setName("Pablo Barrientos");

	customer[3].setIdCustomer("943218765");
	customer[3].setName("Eunice Paredes");

	customer[4].setIdCustomer("234516789");
	customer[4].setName("Amelia Cardenas");

	customer[5].setIdCustomer("876594321");
	customer[5].setName("Dante Barrantes");

	Insurer insurer;

	insurer.addCostumer(&customer[1]);
	insurer.addCostumer(&customer[2]);
	insurer.addCostumer(&customer[5]);
	insurer.addCostumer(&customer[3]);

	cout << insurer.searchCustomer("943218765");
	cout << insurer.searchCustomer("987654321");

	cout << insurer.addVehicleInsurance("943218765", "RDS123", 30000);
	cout << insurer.addVehicleInsurance("876594321", "PTF123", 50000);
	cout << insurer.addVehicleInsurance("123456789", "GDA123", 20000);
	cout << insurer.addVehicleInsurance("943218765", "GDA123", 10000);
	cout << insurer.addVehicleInsurance("987654321", "JGJ123", 10000);
	cout << insurer.addVehicleInsurance("943218765", "CRC123", 80000);
	cout << insurer.addVehicleInsurance("876594321", "TTT123", 70000);

	cout << endl;
	cout << insurer.getOwnVehicleName("CRC123") << endl;
	cout << insurer.getOwnVehicleName("ZZZ123") << endl;

	insurer.getInsuranceAmount("943218765");
	insurer.getInsuranceAmount("876594321");

	return 0;
}