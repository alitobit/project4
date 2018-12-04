#ifndef m100A_H
#define m100A_H
#include<string>
#include<iomanip>

using namespace std;

class m100A: public Machine
{

private:

	


public:

	m100A();

	bool purchaseValidation();
	
	void dollarPayment(int&);

	//void giveChange(int&);


}
#endif
