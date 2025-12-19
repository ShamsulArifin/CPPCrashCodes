#include <iostream>

std::string concatString(std::string firstName, std::string lastName);

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    // return = return a value back to the spot
    //          where you called the encompassing function

    string firstName = "Sam";
    string lastName = "Wolf";
    string fullName = concatString(firstName, lastName);

    cout << "Hello " << fullName << endl;

    return 0;
}

std::string concatString(std::string firstName, std::string lastName)
{
    return firstName + " " + lastName;
}
