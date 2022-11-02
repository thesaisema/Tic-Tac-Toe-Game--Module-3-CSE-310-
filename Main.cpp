#include <iostream>

using namespace std;

char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkForWinner(square)
{
	// Check for horizontal wins.
	if(square[1]) == square[2] && square[2] == square[3])
	{	
	// If it returns 1, a game has concluded and there is a declared winner.
		return 1;
	}

	else if (square[3]) == square[4] && square[4] == square[5])
	{
		return 1;
	}

	else if (square[5] == square[6] && square[6] == square[7])
	{
		return 1;
	}
	else if (square[7] == square[8] && square[8] == square[9])
	{
		return 1;
	}
	// Check for vertical wins.
	else if (square[1]) == square[4] && square[4] == square[7])
	{
		return 1;
	}
	else if (square[2]) == square[5] && square[5] == square[8])
	{
		return 1;
	}
	else if (square[3]) == square[6] && square[6] == square[9])
	{
		return 1;
	}

	// Check for diagonal wins.
	else if(square[1]) == square[5] && square[5] == square[9])
	{
		return 1;
	}
	else if (square[3]) == square[5] && square[5] == square[7])
	{
		return 1;
	}

	// Empty squares.
	else if(square[1] != '1' && square[2] != '2' && square[3] != '3'
			&& square[4] != '4' && square[5] != '5' && square[6] != '6'
			&& square[7] != '7' && square[8] != '8' && square[9] != '9')
		{	// If it returns 0, that means the game has concluded but it is a draw.
			return 0;
		}
	else
	{
		// If it returns -1, that means the game is still ongoing.
		return -1;
	}
}

void gameBoard()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe Game \n\n";

	cout << "Player 1(x) - Player 2(0)" << endl << endl;
	cout << endl;

	// Creating the board itself.
	cout << "   |   |   " << endl;
	cout << " " << square[1] << "   |   " << square[2] << "   |   " <<< square[3] << endl;

	cout << "___|___|___" << endl;
	cout << "   |   |   " << endl;

	cout << " " << square[4] << "   |   " << square[5] << "   |   " << square[6] << endl;

	cout << "___|___|___" << endl;
	cout << "   |   |   " << endl;

	cout << " " << square[7] << "   |   " << square[8] << "   |   " << square[9] << endl;

}

int main()
{
	int player = 1, i, choice;

	do
	{
		board();
		player = (player % 2) ? 1 : 2;

		cout << "Player " << player << ", enter the number: ";
		cin >> choice;

		mark = (player == 1) ? 'X' : 'O';

		// If the player chooses that square, then it will replace that square with X or O.
		if(choice == 1 && square[1] == '1')
		{
			square[1] = mark;
		}
		else if (choice == 2 && square[2] == '2')
		{
			square[2] = mark;
		}
		else if (choice == 3 && square[3] == '3')
		{
			square[3] = mark;
		}
		else if (choice == 4 && square[4] == '4')
		{
			square[4] = mark;
		}
		else if (choice == 5 && square[5] == '5')
		{
			square[5] = mark;
		}
		else if (choice == 6 && square[6] == '6')
		{
			square[6] = mark;
		}
		else if (choice == 7 && square[7] == '7')
		{
			square[7] = mark;
		}
		else if (choice == 8 && square[8] == '8')
		{
			square[8] = mark;

		}
		else if (choice == 9 && square[9] == '9')
		{
			square[9] = mark;
		}
		else
		{
			cout << "THAT WAS AN INVALID MOVE!"

				player--;
			cin.ignore();
			cin.get();
		}

		i = checkForWinner();
		player++;

	}
	while (i == -1);
	board();
	if(i == 1)
	{
		cout << "\aCONGRATULATIONS! PLAYER " << --player << "WINS!";

	}
	else
	{
		cout << "\aSQUASH, IT'S A DRAW!";
	}
	cin.ignore();
	cin.get();
	return 0;
}
