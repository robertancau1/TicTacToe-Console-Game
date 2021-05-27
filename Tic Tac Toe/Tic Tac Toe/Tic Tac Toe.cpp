#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char one = 49, two = 50, three = 51, four = 52, five = 53, six = 54, seven = 55, eight = 56, nine = 57;

void tabel()
{
	cout << "     |      |     " << endl;
	cout << "  " << one << "  |  " << two << "   |  " << three << "   " << endl;
	cout << "_____|______|_____" << endl;
	cout << "     |      |     " << endl;
	cout << "  " << four << "  |  " << five << "   |  " << six << "   " << endl;
	cout << "_____|______|_____" << endl;
	cout << "     |      |     " << endl;
	cout << "  " << seven << "  |  " << eight << "   |  " << nine << "   " << endl;
	cout << "     |      |     " << endl;
	return;
}
void Multiplayer()
{
	int input, nr = 0;
	while (true)
	{
		nr++;
		if (nr % 2 == 1)
		{
			cout << "Player 1(X) is choosing" << endl;
		}
		else
		{
			cout << "Player 2(O) is choosing" << endl;
		}
		cin >> input;
		switch (input)
		{
		case 1:
			if (one != 'X' && one != 'O')
			{
				if (nr % 2 == 1)
				{
					one = 'X';
					system("cls");
					tabel();
				}
				else
				{
					one = 'O';
					system("cls");
					tabel();
				}
			}
			else
			{
				cout << "This possition (1) is already taken" << endl;
				nr -= 1;
			}
			break;
		case 2:
			if (two != 'X' && two != 'O')
			{
				if (nr % 2 == 1)
				{
					two = 'X';
					system("cls");
					tabel();
				}
				else
				{
					two = 'O';
					system("cls");
					tabel();
				}
			}
			else
			{
				cout << "This possition (2) is already taken" << endl;
				nr -= 1;
			}
			break;
		case 3:
			if (three != 'X' && three != 'O')
			{
				if (nr % 2 == 1)
				{
					three = 'X';
					system("cls");
					tabel();
				}
				else
				{
					three = 'O';
					system("cls");
					tabel();
				}
			}
			else
			{
				cout << "This possition (3) is already taken" << endl;
				nr -= 1;
			}
			break;
		case 4:
			if (four != 'X' && four != 'O')
			{
				if (nr % 2 == 1)
				{
					four = 'X';
					system("cls");
					tabel();
				}
				else
				{
					four = 'O';
					system("cls");
					tabel();
				}
			}
			else
			{
				cout << "This possition (4) is already taken" << endl;
				nr -= 1;
			}
			break;
		case 5:
			if (five != 'X' && five != 'O')
			{
				if (nr % 2 == 1)
				{
					five = 'X';
					system("cls");
					tabel();
				}
				else
				{
					five = 'O';
					system("cls");
					tabel();
				}
			}
			else
			{
				cout << "This possition (5) is already taken" << endl;
				nr -= 1;
			}
			break;
		case 6:
			if (six != 'X' && six != 'O')
			{
				if (nr % 2 == 1)
				{
					six = 'X';
					system("cls");
					tabel();
				}
				else
				{
					six = 'O';
					system("cls");
					tabel();
				}
			}
			else
			{
				cout << "This possition (6) is already taken" << endl;
				nr -= 1;
			}
			break;
		case 7:
			if (seven != 'X' && seven != 'O')
			{
				if (nr % 2 == 1)
				{
					seven = 'X';
					system("cls");
					tabel();
				}
				else
				{
					seven = 'O';
					system("cls");
					tabel();
				}
			}
			else
			{
				cout << "This possition (7) is already taken" << endl;
				nr -= 1;
			}
			break;
		case 8:
			if (eight != 'X' && eight != 'O')
			{
				if (nr % 2 == 1)
				{
					eight = 'X';
					system("cls");
					tabel();
				}
				else
				{
					eight = 'O';
					system("cls");
					tabel();
				}
			}
			else
			{
				cout << "This possition (8) is already taken" << endl;
				nr -= 1;
			}
			break;
		case 9:
			if (nine != 'X' && nine != 'O')
			{
				if (nr % 2 == 1)
				{
					nine = 'X';
					system("cls");
					tabel();
				}
				else
				{
					nine = 'O';
					system("cls");
					tabel();
				}
			}
			else
			{
				cout << "This possition (9) is already taken" << endl;
				nr -= 1;
			}
			break;
		default:
			cout << "Out of range" << endl;
			cin.clear();
			cin.ignore();
			nr -= 1;
			break;
		}
		if (one == 'X' && two == 'X' && three == 'X')
		{
			cout << "Player 1(X) Won!";
			break;
		}
		else if (one == 'O' && two == 'O' && three == 'O')
		{
			cout << "Player 2(O) Won!";
			break;
		}
		else if (four == 'X' && five == 'X' && six == 'X')
		{
			cout << "Player 1(X) Won!";
			break;
		}
		else if (four == 'O' && five == 'O' && six == 'O')
		{
			cout << "Player 2(O) Won!";
			break;
		}
		else if (seven == 'X' && eight == 'X' && nine == 'X')
		{
			cout << "Player 1(X) Won!";
			break;
		}
		else if (seven == 'O' && eight == 'O' && nine == 'O')
		{
			cout << "Player 2(O) Won!";
			break;
		}
		else if (one == 'X' && four == 'X' && seven == 'X')
		{
			cout << "Player 1(X) Won!";
			break;
		}
		else if (one == 'O' && four == 'O' && seven == 'O')
		{
			cout << "Player 2(O) Won!";
			break;
		}
		else if (two == 'X' && five == 'X' && eight == 'X')
		{
			cout << "Player 1(X) Won!";
			break;
		}
		else if (two == 'O' && five == 'O' && eight == 'O')
		{
			cout << "Player 2(O) Won!";
			break;
		}
		else if (three == 'X' && six == 'X' && nine == 'X')
		{
			cout << "Player 1(X) Won!";
			break;
		}
		else if (three == 'O' && six == 'O' && nine == 'O')
		{
			cout << "Player 2(O) Won!";
			break;
		}
		else if (one == 'X' && five == 'X' && nine == 'X')
		{
			cout << "Player 1(X) Won!";
			break;
		}
		else if (one == 'O' && five == 'O' && nine == 'O')
		{
			cout << "Player 2(O) Won!";
			break;
		}
		else if (three == 'X' && five == 'X' && seven == 'X')
		{
			cout << "Player 1(X) Won!";
			break;
		}
		else if (three == 'O' && five == 'O' && seven == 'O')
		{
			cout << "Player 2(O) Won!";
			break;
		}
		else
		{
			if (nr == 9)
			{
				cout << "Game ended with a Tie!";
				break;
			}
		}
	}
}
int main()
{
	tabel();
	cout << "--------------------------------" << endl;
	cout << "Player 1 is X and player 2 is O" << endl;
	cout << "--------------------------------" << endl;
	Multiplayer();
}