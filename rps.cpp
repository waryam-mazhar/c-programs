//Rock Paper Scissor :
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() 
{
	int pgrm_value, net_val;
	int ComputerChoice;
	char UserValue;
	int UserChoice;
	int winCounter = 0, lostCount = 0, tieCount = 0;

	do
	{
		srand(0);
		ComputerChoice = rand() % 3;
		while (true)
		{
			cout << " Choose: scissor (S),rock(R), paper(P) :";
			cin >> UserValue;
			if (UserValue == 'R' || UserValue == 'S' || UserValue == 'P')
				break;
			else
				cout << "Enter in CAPS" << endl;
		}

		if (UserValue == 'R')
			UserChoice = 10;
		if (UserValue == 'S')
			UserChoice = 20;
		if (UserValue == 'P')
			UserChoice = 30;

		net_val = ComputerChoice + UserChoice;

		switch (net_val)
		{
		case 11: case 22: case 33:
			if (net_val == 11)
				cout << " Computer is Rock. You are Rock Too. It is a tie" << endl;
			else if (net_val == 22)
				cout << " Computer is Scissor. You are Scissor Too. It is a tie" << endl;
			else
				cout << " Computer is Paper. You are Paper Too. It is a tie" << endl;
			break;
		case 12:
			cout << " Computer is Scissor. You are Rock. You won because Rock crushes Scissors." << endl;
			break;
		case 23:
			cout << " Computer is Paper. You are Scissor. You won because Scissor cuts the Paper." << endl;
			break;
		case 31:
			cout << " Computer is Rock. You are Paper. You won because Paper covers Rock." << endl;
			break;
		case 21:
			cout << " Computer is Rock. You are Scissor. You lost because Rock crushes Scissors." << endl;
			break;
		case 32:
			cout << " Computer is Scissor. You are Paper. You lost because Scissor cuts the Paper." << endl;
			break;
		case 13:
			cout << " Computer is Paper. You are Rock. You lost because Paper covers Rock." << endl;
			break;
		}

		while (true)
		{
			cout << " Do you want to continue to play (Y yes and X No): ";
			cin >> UserValue;
			if (UserValue == 'Y' || UserValue == 'X')
				break;
			else
				cout << "Enter in CAPS" << endl;
		}
	} while (UserValue != 'X');
	return 0;
}