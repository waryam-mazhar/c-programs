// Tic Tac Toe :
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
//initialize the board

char bored[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };

int checkwin();
void board(); 
int main() // Funcion to take in user's inputs
{
	int player = 1, i, choice;
	char sign;
	do
	{
		board();//prints the bord
		player = (player % 2) ? 1 : 2;//choice of player

		//taking numebr from the user
		cout << "Player " << player << ", enter a number: ";
		cin >> choice;

		//specify which sign's turn
		sign = (player == 1) ? 'X' : 'O';

		//checking the choice and if that position is taken or not
		//if postion is not taken and move is valid then place aproprriate sign

		if (choice == 1 && bored[0][0] == '1')
			bored[0][0] = sign;
		else if (choice == 2 && bored[0][1] == '2')
			bored[0][1] = sign;
		else if (choice == 3 && bored[0][2] == '3')
			bored[0][2] = sign;
		else if (choice == 4 && bored[1][0] == '4')
			bored[1][0] = sign;
		else if (choice == 5 && bored[1][1] == '5')
			bored[1][1] = sign;
		else if (choice == 6 && bored[1][2] == '6')
			bored[1][2] = sign;
		else if (choice == 7 && bored[2][0] == '7')
			bored[2][0] = sign;
		else if (choice == 8 && bored[2][1] == '8')
			bored[2][1] = sign;
		else if (choice == 9 && bored[2][2] == '9')
			bored[2][2] = sign;

		//otherwise its an invalid move
		else
		{
			cout << "Invalid move ";
			player--;
			cin.ignore();
			cin.get();
		}
		//checks for win
		i = checkwin();
		player++;
	} while (i == -1);//loop till i is -1

	board();
	if (i == 1)//if i is 1 then some one wins the game
		cout << "==>aPlayer " << --player << " win ";
	else
		cout << "==>aGame draw";
	cin.ignore();
	cin.get();
	return 0;
}

//1 FOR GAME IS OVER WITH RESULT
//-1 FOR GAME IS IN PROGRESS
//O GAME IS OVER AND NO RESULT

int checkwin() // Function to tell if game is over and function also determines the winner
{
	//cheks for same row or cloumn or same diagonal
	if (bored[0][0] == bored[0][1] && bored[0][1] == bored[0][2])
		return 1;
	else if (bored[1][0] == bored[1][1] && bored[1][1] == bored[1][2])
		return 1;
	else if (bored[2][0] == bored[2][1] && bored[2][1] == bored[2][2])
		return 1;
	else if (bored[0][0] == bored[1][0] && bored[1][0] == bored[2][0])
		return 1;
	else if (bored[0][1] == bored[1][1] && bored[1][1] == bored[2][1])
		return 1;
	else if (bored[0][2] == bored[1][2] && bored[1][2] == bored[2][2])
		return 1;
	else if (bored[0][0] == bored[1][1] && bored[1][1] == bored[2][2])
		return 1;
	else if (bored[0][2] == bored[1][1] && bored[1][1] == bored[2][0])
		return 1;
	else if (bored[0][0] != '1' && bored[0][1] != '2' && bored[0][2] != '3'
		&& bored[1][0] != '4' && bored[1][1] != '5' && bored[1][2] != '6'
		&& bored[2][0] != '7' && bored[2][1] != '8' && bored[2][2] != '9')
		return 0;
	else
		return -1;

}
void board() // Function to print out the board and move
{
	system("cls");
	cout << " Tic Tac Toe ";
	cout << "Player 1 (X) - Player 2 (O)" << endl << endl;
	cout << endl;
	cout << " | | " << endl;
	cout << " " << bored[0][0] << " | " << bored[0][1] << " | " << bored[0][2] << endl;
	cout << "_____|_____|_____" << endl;
	cout << " | | " << endl;
	cout << " " << bored[1][0] << " | " << bored[1][1] << " | " << bored[1][2] << endl;
	cout << "_____|_____|_____" << endl;
	cout << " | | " << endl;
	cout << " " << bored[2][0] << " | " << bored[2][1] << " | " << bored[2][2] << endl;
	cout << " | | " << endl << endl;
}