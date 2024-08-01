#include <iostream>
#include <cmath>	//math power
#include <iomanip>

using std::cout;			//eliminating std::cout to cout.
using std::cin;


int main()
{
	bool calc { true };
	char ans{}, calcu {};
	double num1{}, num2{}, op_ans{};

	do {
		
		cout << "***********CALCULATOR*************\n";
		cout << "Enter operator [+,-,*,/,%] : ";
		cin >> calcu;

		switch (calcu) {
			case '+':
				cout << "Adding two numbers!\n";
				cout << "Enter first number: ";
				cin >> num1;
				cout << "Enter second number: ";
				cin >> num2;
				cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
				break;
			case '-':
				cout << "subtracting two numbers!\n";
				cout << "Enter first number: ";
				cin >> num1;
				cout << "Enter second number: ";
				cin >> num2;
				cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
				break;
			case '*':
				cout << "Multiplying two numbers!\n";
				cout << "Enter first number: ";
				cin >> num1;
				cout << "Enter second number: ";
				cin >> num2;
				cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
				break;
			case '/':
				cout << "Dividing two numbers!\n";
				cout << "Enter first number: ";
				cin >> num1;
				cout << "Enter second number: ";
				cin >> num2;
				cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n';
				break;
			default:
				cout << "You enter invalid operation.\n";
				break;
		}
		cout << "**********************************\n";
		cout << "Use calculator again(Y/N) : ";
		cin >> ans;
		if (ans == 'N' || ans == 'n') {
			calc = false;
		}
	} while (calc);

	return 0;
}
