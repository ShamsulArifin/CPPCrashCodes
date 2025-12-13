#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    using std::string;

    // if statements = do something  if a  condition is true.
    // if not, then don't do it

    int age;

    cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 100)
    {
        cout << "You are too old to enter!";
    }
    else if (age < 0)
    {
        cout << "You haven't been born yet!";
    }
    else if (age >= 18)
    {
        cout << "Welcome to the site!";
    }
    else
    {
        cout << "You are not old enough to enter!";
    }

    return 0;
}