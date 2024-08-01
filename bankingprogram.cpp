#include <iostream>
#include <string>			// for getline to work

using std::cout;			
using std::cin;
using std::string;

//initialize first the function of concat string function
double deposit_money(double d_money, double balance);
double withdraw_money(double w_money, double balance);


int main()
{
	double deposit{}, withdraw{}, balance{ 0.0 };
	char selection{}, quit{};
	double user_deposit_money{}, user_withdraw_money{},account_balance{};
	bool transact(true);


	do {
		cout << "\n\n";
		cout << "\n*******************************\n";
		cout << "****Welcome to Bank of Bon*****\n";
		cout << "*******************************\n";
		cout << "Please select your transact.\n";
		cout << "D - Deposit Money\n";
		cout << "W - Withdraw Money\n";
		cout << "B - Show Balance\n";
		cout << "Q - No more Transaction\n";
		cout << "Enter your selection: ";
		cin >> selection;

		switch (selection)
		{
			case 'd':
			case 'D':
				cout << "Enter amount to Deposit: ";
				cin >> user_deposit_money;
				balance = deposit_money(user_deposit_money, balance);
				break;
			case 'w':
			case 'W':
				cout << "Enter amount to Withdraw: ";
				cin >> user_withdraw_money;
				if (balance >= user_withdraw_money) {
					balance = withdraw_money(user_withdraw_money, balance);
				}
				else {
					cout << "You dont have enough money in your account!\n";
				}
				break;
			case 'b':
			case 'B':
				cout << "You have " << balance << " pesos in your account.\n";
				break;
			case 'q':
			case 'Q':
				cout << "Are you sure want to Quit: ";
				cin >> quit;
				if (quit == 'Y' || quit == 'y') {
					transact = false;
					cout << "Thank you banking with us.\n";
					cout << "Come Again.\n";
				}
				break;
			default:
				cout << "Please correct selection\n";
				break;
		}

		cin.get();
	} while (transact);


	cout << "\n\n";
	return 0;
}


double deposit_money(double d_money, double balance) {
	balance += d_money;
	cout << "You have Deposit " << d_money << " pesos.\n";
	return balance;
}

double withdraw_money(double w_money, double balance) {
	balance -= w_money;
	cout << "You Withdraw " << w_money << " pesos.\n";
	cout << "You have " << balance << " pesos in your account.\n";
	return balance;
}
