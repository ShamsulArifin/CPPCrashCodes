#include <iostream>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    int rows, columns;
    char symbol;

    cout << "How many rows: ";
    cin >> rows;

    cout << "How many columns: ";
    cin >> columns;

    cout << "Enter a symbol to use: ";
    cin >> symbol;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            cout << symbol;
        }
        cout << endl;
    }

    return 0;
}