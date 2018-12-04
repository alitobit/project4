#ifndef Machine_H
#define Machine_H

using namespace std;

class Machine:public Inventory
{

private:

	string m_100A1;
	string m_100A2;
	string m_100C1;
	string m_100C2;

	int Transactions;

public:

	void machine();
	
	void selected(string&);

};
#endif