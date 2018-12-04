#include <iostream>
#include "Product.h"

using namespace std;

Product::Product()
{
	name = " ";
	id = " ";
	price = 0;
}

Product::Product(string new_name, string new_id, int new_price)
{
	name = new_name;
	id = new_id;
	price = new_price;
}
//SETTERS 
void Product::Product::set_ID(string num) {

	id = num;
}

void Product::Product::set_price(int num) {

	price = num;
}

void Product::Product::set_Items(string str) {

	name = str;
}

void Product::Product::set_Quantity(const int& qt) {

	current_quantity = qt;
	initial_quantity = qt;

}
void Product::Product::set_maxQuantity(int max){

	max_quantity = max;
}
//GETTERS
string Product::Product::get_ID() {

	return id;
}

int Product::Product::get_price() {

	return price;
}

string Product::Product::get_name() {

	return name;
}

int Product::get_currQuantity()
{
	return 0;
}

int Product::get_maxQuantity()
{
	return 0;
}

int Product::get_initial_Quanoty()
{
	return 0;
}
