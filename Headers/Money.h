
#ifndef Money_H
#define Money_H

class Money
{
private:
	int value;
	int amount;
//value of currency
	int dollars = 100,
	int quarters = 25,
	int dimes = 10, 
	int nickles = 5;
public:

	Money();

	Money(int newValue, int newAmount,int,int);

	void increase(int d,int q,int di,int n);

	void decrease(int d, int q, int di, int n);
//setters
	void setDollars(int d);

	void setQuarters(int q);

	void setDimes(int di);

	void setNickels(int n);
//getters
	int getValue();

	int getAmount();
	
	int getDollars();

	int getQuarters();

	int getDimes();

	int getNickels();


};

#endif 
