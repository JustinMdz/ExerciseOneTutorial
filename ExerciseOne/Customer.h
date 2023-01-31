#pragma once
#include <iostream>

using namespace std;

class Customer
{
	private:
		string idCustomer;
		string name;

	public:
		Customer();
		void setName(string);
		string getName();
		void setIdCustomer(string);
		string getIdCustomer();

};

