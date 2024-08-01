#include <iostream>
#include <string>
#include <ctime>		//

using std::cout;			//eliminating std::cout to cout.
using std::cin;
using std::string;


int main()
{
	bool game{ true }, correct{true};
	char play{};
	int x{ 1 };
	do {
		int guess_num{}, tries{5};

		cout << "******************************\n";
		cout << "*******Guess the Number*******\n";
		cout << "******************************\n\n";
		cout << "Want to play the game(Y/N): ";
		cin >> play;
		if (play == 'Y' || play == 'y') {
			srand(time(0));
			int random_num = rand() % 100 + 1;
			cout << random_num << '\n';
			while (correct) {
				cout << "Enter a number from 1 to 100: ";
				cin >> guess_num;
				tries--;
				cout << "You have " << tries << " tries remaining.\n";
				if (tries > 0) {
					if (!(guess_num > 100) && !(guess_num < 1)) {
						if (guess_num > random_num) {
							cout << "You guess wrong. Go Lower!\n";
						}
						else if (guess_num < random_num) {
							cout << "You guess wrong. Go Higher!\n";
						}
						else {
							cout << "Good Job! You Guess it right!";
							break;
						}
					}
					else {
						cout << "Try Again!, Number is out of range.\n";
					}
				}
				else {
					cout << "Game Over! No more Try left!\n";
					correct = false;
				}
			}
		}
		else {
			cout << "Thanks for playing!\n";
			game = false;
		}
		cin.get();
		cout << '\n';

	} while (game);
	cout << "\n\n";
	return 0;
}


