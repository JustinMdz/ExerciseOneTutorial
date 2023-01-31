#include <iostream>
#include "Customer.h"
#include "Insurer.h"
using namespace std;

int main() {

	Customer customer[200];

	customer[0].setIdCustumer("123456789");
	customer[0].setName("Pedro Villareal");

	customer[1].setIdCustumer("987654321");
	customer[1].setName("Maritza Guadamuz");

	customer[2].setIdCustumer("123459876");
	customer[2].setName("Pablo Barrientos");

	customer[3].setIdCustumer("943218765");
	customer[3].setName("Eunice Paredes");

	customer[4].setIdCustumer("234516789");
	customer[4].setName("Amelia Cardenas");

	customer[5].setIdCustumer("876594321");
	customer[5].setName("Dante Barrantes");

	Insurer insurer;

	insurer.addCostumer(&customer[1]);
	insurer.addCostumer(&customer[2]);
	insurer.addCostumer(&customer[5]);
	insurer.addCostumer(&customer[3]);

	cout << insurer.searchCostumer("943218765");
	cout << insurer.searchCostumer("987654321");





	return 0;
}