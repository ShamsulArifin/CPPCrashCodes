#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
	using std::cout, std::cin, std::string, std::endl;

	char player;
	char computer;

	player = getUserChoice();
	cout << "***************************" << endl;
	cout << "Your Choice: ";
	showChoice(player);

	computer = getComputerChoice();
	cout << "Computer's choice: ";
	showChoice(computer);
	cout << "***************************" << endl;

	chooseWinner(player, computer);

	return 0;
}

char getUserChoice()
{
	char player;

	std::cout << "***************************" << std::endl;
	std::cout << "Rock-Paper-Scissors Game!" << std::endl;
	std::cout << "***************************" << std::endl;

	do
	{
		std::cout << "Choose one of the following" << std::endl;
		std::cout << "***************************" << std::endl;
		std::cout << "'r' for rock" << std::endl;
		std::cout << "'p' for paper" << std::endl;
		std::cout << "'s' for scissors" << std::endl;
		std::cout << "***************************" << std::endl;
		std::cin >> player;
	} while (player != 'r' && player != 'p' && player != 's');

	return player;
}

char getComputerChoice()
{
	srand(time(0));
	int num = rand() % 3 + 1;

	switch (num)
	{
	case 1:
		return 'r';

	case 2:
		return 'p';

	case 3:
		return 's';

	default:
		break;
	}
	return 0;
}

void showChoice(char choice)
{
	switch (choice)
	{
	case 'r':
		std::cout << "Rock" << std::endl;
		break;
	case 'p':
		std::cout << "Paper" << std::endl;
		break;
	case 's':
		std::cout << "Scissors" << std::endl;
		break;
	}
}

void chooseWinner(char player, char computer)
{
	switch (player)
	{
	case 'r':
		if (computer == 'r')
		{
			std::cout << "It's a tie!\n";
		}
		else if (computer == 'p')
		{
			std::cout << "You lose!\n";
		}
		else
		{
			std::cout << "You win!\n";
		}
		break;
	case 'p':
		if (computer == 'r')
		{
			std::cout << "You win!\n";
		}
		else if (computer == 'p')
		{
			std::cout << "It's a tie!\n";
		}
		else
		{
			std::cout << "You lose!\n";
		}
		break;
	case 's':
		if (computer == 'r')
		{
			std::cout << "You lose!\n";
		}
		else if (computer == 'p')
		{
			std::cout << "You win!\n";
		}
		else
		{
			std::cout << "It's a tie!\n";
		}
		break;

	default:
		break;
	}
}
