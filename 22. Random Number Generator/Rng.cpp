#include <iostream>
#include <ctime>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    // pseudo random = NOT truly random (but close)

    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    return 0;
}