#ifndef Inventory_H
#define Inventory_H
#include <string>
#include<vector>
#include<iostream>
#include"product.h"

using namespace std;

class Inventory
{
private:
	//variables

	//parallel array
    vector<int> quantity;
	vector<Product> items;
	//functions
	void readIntoVec(fstream& file);

public: 

	Inventory();

	Inventory(fstream&);



};

#endif
