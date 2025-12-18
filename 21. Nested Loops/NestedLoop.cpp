#include <iostream>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << j << ' ';
        }
        cout << endl;
    }

    return 0;
}