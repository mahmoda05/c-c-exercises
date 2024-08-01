#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int check_answer(int num_question, char letter);

int main() {
	char ans{};
	int correct_ans{}, output_ans{};
	string question[] = { {"What is the color of the leave? "},
							{"What animal has 2 legs?"},
							{"Capital city of philippines."},
							{"What job to teach a student."}};
	string option[][4] = { {"A.Blue", "B.Yellow", "C.Red", "D.Green"},
					   {"A.Cat", "B.Dog", "C.Bird", "D.Chicken"},
					   {"A.Manila", "B.Cavite", "C.Baguio", "D.Quezon"},
						{"A.Engineer", "B.Doctor", "C.Teacher", "D.Police"}};
	
	int size_ques = sizeof(question) / sizeof(question[0]);
	for (int i = 0; i < size_ques; i++) {
		cout << "******************************************************\n";
		cout << "Question number#" << i + 1 << ": " << question[i] << '\n';
		cout << "******************************************************\n";
		for (int j = 0; j < sizeof(option[0]) / sizeof(option[0][0]); j++) {
			cout << option[i][j] << '\n';
		}
		cout << "Enter correct letter: ";
		cin >> ans;
		ans = toupper(ans);
		output_ans = check_answer(i, ans);
		if (output_ans == 1) {
			correct_ans++;
		}
	}
	cout << "******************************************************\n";
	cout << "Your total score : " << correct_ans << "/" << size_ques << " or " << 100 * (correct_ans / (double)size_ques) << "%\n";
	return 0;
}

int check_answer(int num_question, char letter) {

	char answer[] = { 'D','D','A','C' };

	if (letter == answer[num_question]) {
		cout << "You are Correct!\n";
		return 1;
	}
	else {
		cout << "You are Wrong.\n";
		return 0;
	}
}