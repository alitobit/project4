#ifndef Product_H
#define Product_H
#include <String>
#include <vector>
#include <iostream>
#include "Product.h"

using namespace std;

class Product
{
private:
    //variables
	
	string id;
	int amount;
	int price;
	string name;
	int current_quantity, max_quantity, initial_quantity;

public:

	Product();

	Product(string new_name, string new_id, int new_price);
    //SETTERS
	void set_ID(string);

	void set_ID(string num);

	void set_price(int);

	void set_Items(string);

	void set_Quantity(int&);

	void set_Quantity(const int & qt);

	void set_maxQuantity(int);
	//GETTERS
	string get_ID();

	int get_price();

	string get_name();

	int get_currQuantity();

	int get_maxQuantity();

	int get_initial_Quantity();

};
#endif
