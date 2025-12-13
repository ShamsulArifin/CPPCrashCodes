#include <iostream>

int main()
{
    using std::cout;
    using std::string;
    using std::endl;

    char grade;

    cout << "What letter grade?: ";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "You did great!";
        break;
    case 'B':
        cout << "You did Good!";
        break;
    case 'C':
        cout << "You did Okay!";
        break;
    case 'D':
        cout << "You did not do good!";
        break;
    case 'F':
        cout << "You Failed!";
        break;
    
    default:
        cout << "Please only enter in a letter grade (A-F)";
        break;
    }

    return 0;
}