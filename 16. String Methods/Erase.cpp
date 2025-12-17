#include <iostream>
#include <string>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    string name;
    cout << "Enter your name: ";
    std::getline(cin, name);

    name.erase(0, 3);

    cout << name;

    return 0;
}