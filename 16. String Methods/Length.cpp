#include <iostream>
#include <string>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    string name;
    cout << "Enter your name: ";
    std::getline(cin, name);

    if (name.length() > 12 )
    {
        cout << "Your name can't be over 12 characters!";
    }
    else
    {
        cout << "Welcome " << name;
    }

    return 0;
}