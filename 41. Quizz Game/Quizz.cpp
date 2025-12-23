#include <iostream>

int main()
{
	using std::cout, std::cin, std::string, std::endl;

	string questions[] = {"1. What year was C++ created?: ", "2. Who invented C++?: ", "3. What is the predecessor of C++?: ", "4. Which is best? JAVA or C++?: "};

	string options[][4] = {
			{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
			{"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
			{"A. C", "B. C+", "C. C--", "D. C#"},
			{"A. Same", "B. C++", "C. JAVA", "D. Both Slow"}};

	char answerKey[] = {'C', 'B', 'A', 'B'};

	int size = sizeof(questions) / sizeof(questions[0]);
	char guess;
	int score;

	for (int i = 0; i < size; i++)
	{
		cout << "**************************" << endl;
		cout << questions[i] << endl;
		cout << "**************************" << endl;

		for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
		{
			cout << options[i][j] << endl;
		}

		cin >> guess;
		guess = toupper(guess);

		if (guess == answerKey[i])
		{
			cout << "CORRECT!" << endl;
			score++;
		}
		else
		{
			cout << "WRONG!" << endl;
			cout << "Answer: " << answerKey[i] << endl;
		}
	}
	cout << "**************************" << endl;
	cout << "         RESULTS          " << endl;
	cout << "**************************" << endl;
	cout << "CORRECT GUESSES: " << score << endl;
	cout << "# of QUESTIONS: " << size << endl;
	cout << "SCORE: " << (score / (double)size) * 100 << "%" << endl;

	return 0;
}