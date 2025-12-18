#include <iostream>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    // do while loop = do some block of code first,
    // THEN repeat again if condition is true

    int number;

    do
    {
        cout << "Enter a positive #: ";
        cin >> number;
    } while (number < 0);

    cout << "The # is: " << number;

    return 0;
}