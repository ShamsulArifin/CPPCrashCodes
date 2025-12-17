#include <iostream>
#include <string>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    string name;
    cout << "Enter your name: ";
    std::getline(cin, name);

    name.append("@gmail.com");
    cout << "Your user name is now " << name;

    return 0;
}