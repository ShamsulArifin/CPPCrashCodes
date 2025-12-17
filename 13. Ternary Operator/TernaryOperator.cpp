#include <iostream>

int main()
{
    using std::cout;
    using std::string;
    using std::endl;

    // ternary operator ?: replacement to an if/else statement
    // condition ? expression1 : expression2;

    // int grade = 75;

    // grade >= 60 ? cout << "You passed!" : cout << "You failed!";

    // int number = 8;

    // number % 2 ? cout << "ODD" : cout << "EVEN";

    bool hungry = true;

    // hungry ? cout << "You are hungry" : cout << "You are not hungry";
    cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}