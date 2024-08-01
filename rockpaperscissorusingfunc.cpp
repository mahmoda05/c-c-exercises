#include <iostream>
#include <iomanip>
#include <ctime>


using std::cout;
using std::cin;
using std::string;


char user_choice();
void show_player_choice(char player);
void show_comp_choice(int comp);
int comp_choice();
void winner(char player, int comp);


int main() {
	char player{};
	int comp{};

	do {
		player = user_choice();
		cout << '\n';
		cout << "Player hand : ";
		show_player_choice(player);
		comp = comp_choice();
		cout << "Computer hand : ";
		show_comp_choice(comp);
		cout << '\n';
		cout << "==============\n";
		winner(player, comp);
		cout << "==============\n";

		cout << "\n\n";
	} while (true);
	


	return 0;
}


char user_choice() {

	char player_select{};
	do {
		cout << "****Let's play a Game****\n";
		cout << " Rock - Paper - Scissor\n";
		cout << "*************************\n";
		cout << "R - Rock\n";
		cout << "P - Paper\n";
		cout << "S - Scissor\n";
		cout << "Select your hand: ";
		cin >> player_select;
		cout << '\n';
	} while (player_select != 'r' && player_select != 'p' && player_select != 's');
	return player_select;
}

void show_player_choice(char player) {

	if (player == 'r') {
		cout << "Rock\n";
	}
	else if (player == 'p') {
		cout << "Paper\n";
	}
	else {
		cout << "Scissor\n";
	}
}

int comp_choice() {

	int comp{};
	srand(time(0));
	comp = rand() % 3 + 1;
	return comp;
}

void show_comp_choice(int comp) {

	if (comp == 1) {
		cout << "Rock\n";
	}
	else if (comp == 2) {
		cout << "Paper\n";
	}
	else {
		cout << "Scissor\n";
	}
}

void winner(char player, int comp) {

	switch (player)
	{
	case 'r':				//2.paper , 3. scissor
		if (comp == 3) {
			cout << "You Win!\n";
		}
		else if (comp == 2) {
			cout << "You Lose!\n";
		}
		else {
			cout << "It's a Draw!\n";
		}
		break;
	case 'p':				//1.rock , 3. scissor
		if (comp == 1) {
			cout << "You Win!\n";
		}
		else if (comp == 3) {
			cout << "You Lose!\n";
		}
		else {
			cout << "It's a Draw!\n";
		}
		break;
	case 's':				//1.rock , 2. paper
		if (comp == 2) {
			cout << "You Win!\n";
		}
		else if (comp == 1) {
			cout << "You Lose!\n";
		}
		else {
			cout << "It's a Draw!\n";
		}
		break;
	default:
		break;
	}
}