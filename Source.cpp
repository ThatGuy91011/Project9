#include <iostream>

using namespace std;
void CheckBalanceTerror(int& TerrorBalance);
void CheckBalanceJoe(int& JoeBalance);
void HackingBalance(int& JoeBalance, int& TerrorBalance);
int main()
{
	int TerrorBalance = 0;
	int JoeBalance = 0;
	cout << "CIA Balance Switch" << endl;
	CheckBalanceJoe(JoeBalance);
	CheckBalanceTerror(TerrorBalance);
	cout << "Joe's Current Balance: " << JoeBalance << endl;
	cout << "Terrorist's Current Balance: " << TerrorBalance << endl;
	cout << "*****START HACK*****" << endl;
	HackingBalance(JoeBalance, TerrorBalance);
	cout << "Joe's Current Balance: " << JoeBalance << endl;
	cout << "Terrorist's Current Balance: " << TerrorBalance << endl;
}
void CheckBalanceTerror(int& TerrorBalance)
{
	int fund1 = 300;
	int fund2 = 700;
	int fund3 = 100;

	TerrorBalance = fund1 + fund2 + fund3;
}

void CheckBalanceJoe(int& JoeBalance)
{
	int fund1 = 100;
	int fund2 = 50;
	int fund3 = 20;

	JoeBalance = fund1 + fund2 + fund3;
}
void HackingBalance(int& JoeBalance, int& TerrorBalance)
{
	int tempFriend = 0;


	tempFriend = JoeBalance;
	JoeBalance = TerrorBalance;
	TerrorBalance = tempFriend;
}