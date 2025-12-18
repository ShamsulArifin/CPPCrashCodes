#include <iostream>
#include <ctime>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    int num;
    int guess;
    int tries;

    srand(time(0));
    num = (rand() % 100) + 1;

    cout << "****** NUMBER GUESSING GAME ******" << endl;

    do
    {
        cout << "Enter a guess between (1-100): ";
        cin >> guess;
        tries++;

        if (guess > num)
        {
            cout << "Too high!" << endl;
        }
        else if (guess < num)
        {
            cout << "Too low!" << endl;
        }
        else
        {
            cout << "CORRECT! # of tries: " << tries << endl;
        }

    } while (guess != num);

    return 0;
}