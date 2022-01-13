#include <iostream>
using namespace std;

char matrix[10] = {'0','1','2','3','4','5','6','7','8','9'};

int checkwin(){
	if (matrix[1] == matrix[2] && matrix[2] == matrix[3])
		return 1;
	else if (matrix[4] == matrix[5] && matrix[5] == matrix[6])
		return 1;
	else if (matrix[7] == matrix[8] && matrix[8] == matrix[9])
		return 1;
	else if (matrix[1] == matrix[4] && matrix[4] == matrix[7])
		return 1;
	else if (matrix[2] == matrix[5] && matrix[5] == matrix[8])
		return 1;
	else if (matrix[3] == matrix[6] && matrix[6] == matrix[9])
		return 1;
	else if (matrix[1] == matrix[5] && matrix[5] == matrix[9])
		return 1;
	else if (matrix[3] == matrix[5] && matrix[5] == matrix[7])
		return 1;
	else if (matrix[1] != '1' && matrix[2] != '2' && matrix[3] != '3' && matrix[4] != '4' && matrix[5] != '5' && matrix[6] != '6' && matrix[7] != '7' && matrix[8] != '8' && matrix[9] != '9')
		return 0;
	else
		return -1;
}

void board(){
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";
	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << matrix[1] << "  |  " << matrix[2] << "  |  " << matrix[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << matrix[4] << "  |  " << matrix[5] << "  |  " << matrix[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << matrix[7] << "  |  " << matrix[8] << "  |  " << matrix[9] << endl;
	cout << "     |     |     " << endl << endl;
}

int main(){
	int player = 1,i,choice;
	char mark;
	do
	{
		board();
		player=(player%2)?1:2;
		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;
		mark=(player == 1) ? 'X' : 'O';
		if (choice == 1 && matrix[1] == '1')
			matrix[1] = mark;
		else if (choice == 2 && matrix[2] == '2')
			matrix[2] = mark;
		else if (choice == 3 && matrix[3] == '3')
			matrix[3] = mark;
		else if (choice == 4 && matrix[4] == '4')
			matrix[4] = mark;
		else if (choice == 5 && matrix[5] == '5')
			matrix[5] = mark;
		else if (choice == 6 && matrix[6] == '6')
			matrix[6] = mark;
		else if (choice == 7 && matrix[7] == '7')
			matrix[7] = mark;
		else if (choice == 8 && matrix[8] == '8')
			matrix[8] = mark;
		else if (choice == 9 && matrix[9] == '9')
			matrix[9] = mark;
		else
		{
			cout<<"Invalid move ";
			player--;
			cin.ignore();
			cin.get();
		}
		i=checkwin();
		player++;
	}while(i==-1);
	board();
	if(i==1)
		cout<<"==> \aPlayer "<<--player<<" win ";
	else
		cout<<"==> \aGame draw";
	cin.ignore();
	cin.get();
	return 0;
}
