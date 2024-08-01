#include <iostream>
#include <string>


using std::cout;			//eliminating std::cout to cout.
using std::cin;
using std::string;


int main()
{
	int x{ 1 };

	do {

		srand(time(NULL));			//this function will intializing random number generator
		int num1 = (rand() % 6) + 1;
		int num2 = (rand() % 6) + 1;
		int num3 = (rand() % 6) + 1;

		cout << "Dice1: " <<num1 << std::endl;
		cout << "Dice2: " <<num2 << std::endl;
		if (num1 > num2) {
			cout << "Dice1 " <<num1 <<" Dice2 " <<num2 <<". Dice1 is greater than Dice2, Dice1 Win!";
		}
		else if (num2 > num1) {
			cout << "Dice1 " << num1 << " Dice2 " << num2 << ". Dice2 is greater than Dice1, Dice2 Win!";
		}
		else {
			cout << "Draw!";
		}

		cin.get();
		cout << "\n\n";

	}	while (x > 0);

	cout << "\n\n";
	return 0;
}


