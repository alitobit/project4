#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include "Inventory.h"
#include "Product.h"

using namespace std;


Inventory::Inventory()
{
	Product item;

	quantity.push_back(0);
	items.push_back(item);
}



Inventory::Inventory(fstream& file)
{
	readIntoVec(file);
}
                                   
//readIntoVec - read file into array                   
void Inventory::Inventory::readIntoVec(fstream& file)
{
	while (!file.eof())
	{
		string id;
		int price;
		string name;
		int amount;

		file >> id >> amount >> price;
		
		getline(file, name);

		Product item;// (name, id, price);
		item.set_ID(id);
		item.set_Quantity(amount);
		item.set_price(price);
		item.set_Items(name);

		
		//item.push_back(item);
		//quantity.push_back(amount);
	}
	
	//file.close();
}




