#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;


void prodkey()
{
	string prodkeyreq = "blank";
	cout << "Please enter a valid Product Key." <<endl;
	cin >> prodkeyreq;
	
}

void authsuccess()
{
	string choise2 = "blank";
	system("CLS");
	cout << "Congratulations! Authorization succesful." << endl;
	Sleep(1000);
	cout << "Please choose which product you would like to install-"<<endl;
	cout << "1) SLUG Crypt"<<endl;
	cout << "2) SLUG Assistant" << endl;
	cout << "3) Exit SLUG HUB"<< endl;
	cin >> choise2;
}

void authkey()
{
	int authkeyreal = 112263;
	int keyreq = 0;
	cout << "Please enter your Authorisation key." <<endl;
	cin >> keyreq;
	cout << "Proccessing.";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << "." << endl ;
	if (keyreq == authkeyreal)
	{
		authsuccess();
	}
	else
	{

	}
}


void Choise1()
{
	int choise1ans = 0;
	cout << "Hello. Welcome to SLUG Suite. To begin, please choose to enter a product code, or auth. key." << endl;
	cout << "1) Product Code" << endl;
	cout << "2) Auth. Key" << endl;
	cout << "Please type either 1, or 2." << endl;
	cin >> choise1ans;
	if (choise1ans == 1)
	{
		prodkey();
	}
	else if (choise1ans == 2)
	{
		authkey();
	}
	else
	{
		cout << "Error. Restarting.";
		Choise1();
	}
}

void authfail()
{
	cout << "Error. Code was incorrect. Please try again.";
	Choise1();
}

int main()
{
	Choise1();
}
