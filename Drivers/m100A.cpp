#include<iostream>
#include<string>
#include"m100A.h"
#include "Product.h"

using namespace std;

m100A::m100A()
{

}

bool m100A::purchaseValidation()
{
	int amount;
	bool termiante = false;
	while (!terminate)
	{
		cout << "Insert dollar --> ";
		cin >> amount;
		if (amount < 100 || amount > 100)

		{
			cout << "Invalid amount (outside valid range). Try again." << endl;
		}
		else if ((amount % 5) != 0)
		{
			cout << "Invalid amount (not a multiple of 5). Try again." << endl;
		}
		else
			return 1;
	}
}

void m100A::m100A::dollarPayment(int& change)
{
	Product prc;
	int temp, dollar, change;

	dollar = 100;
	
	temp = dollar;
	dollar = 0;
	change = temp - prc.get_price();
}
//
//void m100A::giveChange(int &change)
//{
//
//}
