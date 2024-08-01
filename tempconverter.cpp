#include <iostream>
#include <cmath>	//math power
#include <iomanip>

using std::cout;			//eliminating std::cout to cout.
using std::cin;


int main()
{
	bool convert { true };
	char option{}, more{};
	do {
		double c{}, f{}, temp{};
		cout << std::fixed << std::setprecision(2);
		cout << "====Temperature  Conversion====\n";
		cout << "Select below option!" << '\n';
		cout << "'C' Celcius to Farenheit." << '\n';
		cout << "'F' Farenheit to Celcius." << '\n';
		cout << "Input here to select --->";
		cin >> option;
		
		switch (option)
		{
			case 'c':
			case 'C':
				cout << "\nSelecting Celcius to Farenheit" << '\n';
				cout << "Enter the value of Celcius:";
				cin >> temp;
				//f = temp*(9/double(5)) + 32;
				f = (temp*9)/5 + 32;
				cout << temp << "C is equal to " << f << "F." << '\n';
				break;
			case 'f':
			case 'F':
				cout << "\nSelecting Farenheit to Celcius" <<'\n';
				cout << "Enter the value of Farenheit:";
				cin >> temp;
				c = (temp - 32) * (5 / double(9));
				cout << temp << "F is equal to " << c << "C." << '\n';
				break;
			default:
				cout << "\nNot a valid operation!\n";
				break;
		}
		cout << "Convert more(Y/N): ";
		cin >> more;
		if (more == 'N' || more == 'n') {
			more = false;
		}
		cout << "\n\n";
	} while (more);


	cout << "\n\n";
	return 0;
}
