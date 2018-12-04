#include<iostream>
#include"string"
#include "m_100C.h"

using namespace std;

m_100C::m_100C()
{
	cardNumber = 0;
}

bool m_100C::m_100C::verifyCard(const string & cardNo)
{



	int nDigits = cardNo.length();

	int nSum = 0, isSecond = false;

	for (int i = nDigits - 1; i >= 0; i--) 
	{
		int d = cardNo[i] - '0';

		if (isSecond == true)      // add two digits to handle
			d = d * 2;             // cases that make two digits after
		  	nSum += d / 10;                     // doubling
		    nSum += d % 10;
            isSecond = !isSecond;
		 
	}

	return(nSum % 10 == 0);
}

bool m_100C::attempt()
{
	m_100C obj;

	int attempt = 0;

	string cardNumber;

	while (attempt < 2)
	{
		cout << "Please enter a card number: " << endl;

		cin >> cardNumber;

		if (obj.verifyCard(cardNumber))
		{
			cout << "This is a valid Card." << endl;
		}
		else
		{
			cout << "This is not a valid card." << endl;

			attempt++;

		}
	}
	cout << "Entry Limit has been reached.\n";

}



