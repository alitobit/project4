//  money.cpp
//  Project 4 CSCI140
#include<iostream>
#include "money.h"

using namespace std;

Money::Money()
{
	dollars = 0;
	quarters = 0;
	dimes = 0;
	nickles = 0;
}

Money::Money(int d, int q, int di, int n)
{
	dollars = d;
	quarters = q;
	dimes = di;
	nickles = n;
}

void Money::Money::increase(int d, int q, int di, int n)
{
	dollars += d;
	quarters += q;
	dimes += di;
	nickles += n;
}

void Money :: decrease(int d, int q, int di, int n)
{
	dollars -= d;
	quarters -= q;
	dimes -= di;
	nickles -= n;
}

int Money::getValue()
{
	return 0;
}

int Money::getAmount()
{
	return 0;
}

void Money::setDollars(int d)
{
	dollars = d;
}

void Money::setQuarters(int q)
{
	quarters = q;
}

void Money::setDimes(int di)
{
	dimes = di;
}

void Money::setNickels(int n)
{
	nickles = n;
}

int Money::getDollars()
{
	return dollars;
}

int Money::getQuarters()
{
	return quarters;
}

int Money::getDimes()
{
	return dimes;
}

int Money::getNickels()
{
	return nickles;
}
