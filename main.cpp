#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "Inventory.h"
#include "Machine.h"
#include "Product.h"

using namespace std;

bool codeValidate();
void machine_selection();

Inventory read;

int main(){

fstream file;
file.open("products.txt");

	codeValidate();
	machine_selection();

	read.readIntoVec(file);

	system("pause");

	return 0;
}
bool codeValidate(){

	string code;

		cout << "Enter Code: ";
		getline(cin, code);

		if (code != "csci140") {

			cout << "** Invalid code **\n";
			return 0;
		}
		else{
			cout << "Initializing Machines. Please wait...\n";
			cout << "Machines are ready: \n" << "Available machines: 100A1, 100A2, 100C1, 100C2 \n";
			return 1;
		}

}

void machine_selection() {
	string machine;
	Machine selected_Machine;
	cout << "Select a  machine ---> ";
	
	cin >> machine;

	
	selected_Machine.selected(machine);
	
} 