#include <iostream>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    // array = a data structure that can hold multiple values
    //          values are accessed by an index number
    //          "kind of like a variable that holds multiple values"

    double prices[] = {5.00, 7.50, 9.99, 15.00};

    cout << prices[0] << endl;
    cout << prices[1] << endl;
    cout << prices[2] << endl;
    cout << prices[3] << endl;

    return 0;
}