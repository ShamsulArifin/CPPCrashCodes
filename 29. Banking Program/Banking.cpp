#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
	using std::cout, std::cin, std::string, std::endl;

	double balance = 0;
	int choice = 0;

	do
	{
		cout << "********************" << endl;
		cout << "Enter your choice: " << endl;
		cout << "********************" << endl;
		cout << "1. Show Balance" << endl;
		cout << "2. Deposit Money" << endl;
		cout << "3. Withdraw Money" << endl;
		cout << "4. Exit" << endl;
		cout << "********************" << endl;

		cin >> choice;
		cin.clear();
		fflush(stdin);

		switch (choice)
		{
		case 1:
			showBalance(balance);
			break;
		case 2:
			balance += deposit();
			showBalance(balance);
			break;
		case 3:
			balance -= withdraw(balance);
			showBalance(balance);
			break;
		case 4:
			cout << "Thanks for visiting!" << endl;
			cout << "********************" << endl;
			break;

		default:
			cout << "Invalid Choice!" << endl;
			break;
		}
	} while (choice != 4);

	return 0;
}

void showBalance(double balance)
{
	std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << std::endl;
}

double deposit()
{
	double depositAmount = 0;
	std::cout << "Enter deposit amount: " << std::endl;
	std::cin >> depositAmount;

	if (depositAmount > 0)
	{
		return depositAmount;
	}
	else
	{
		std::cout << "That's not a valid amount!" << std::endl;
		return 0;
	}
}

double withdraw(double balance)
{
	double withdrawAmount;
	std::cout << "Enter withdraw amount: " << std::endl;
	std::cin >> withdrawAmount;

	if (withdrawAmount > balance)
	{
		std::cout << "Insufficient funds!" << std::endl;
		return 0;
	}
	else if (withdrawAmount < 0)
	{
		std::cout << "That's not a valid amount!" << std::endl;
		return 0;
	}
	else
	{
		return withdrawAmount;
	}
}