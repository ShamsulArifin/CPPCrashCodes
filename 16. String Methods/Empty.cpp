#include <iostream>
#include <string>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    string name;
    cout << "Enter your name: ";
    std::getline(cin, name);

    if(name.empty())
    {
        cout << "You didn't enter your name";
    }
    else
    {
        cout << "Hello " << name;
    }

    return 0;
}