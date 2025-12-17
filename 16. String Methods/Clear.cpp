#include <iostream>
#include <string>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    string name;
    cout << "Enter your name: ";
    std::getline(cin, name);

    name.clear();
    cout << "Hello " << name;

    return 0;
}