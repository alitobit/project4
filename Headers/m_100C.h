#ifndef m_100C_H
#define m_100C_H

using namespace std;

class m_100C

{
private:

	int cardNumber;

public:

	m_100C();
	
	bool attempt();

	bool verifyCard(const string& cardNo);




};
#endif