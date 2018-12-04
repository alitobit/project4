#ifndef m100C_H
#define m100C_H

using namespace std;

class m100C

{
private:

	int cardNumber;

public:

	m_100C();
	
	bool attempt();

	bool verifyCard(const string& cardNo);




};
#endif
