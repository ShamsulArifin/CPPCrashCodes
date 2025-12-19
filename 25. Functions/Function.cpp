#include <iostream>

void salam(std::string name);

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    // function = a block of reusable code

    salam("Omor");
    salam("Talha");
    salam("Rouhi");

    return 0;
}

void salam(std::string name)
{
    std::cout << "Assalamu alaikum" << std::endl;
    std::cout << "wa rahmatullahi" << std::endl;
    std::cout << "wa barakatuh" << std::endl;
    std::cout << "wa jannatuh" << std::endl;
    std::cout << "wa magfiratuh " << name << "\n\n";
}