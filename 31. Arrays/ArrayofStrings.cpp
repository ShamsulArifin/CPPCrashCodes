#include <iostream>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    // array = a data structure that can hold multiple values
    //          values are accessed by an index number
    //          "kind of like a variable that holds multiple values"

    string cars[4];

    cars[0] = "Honda";
    cars[1] = "Toyota";
    cars[2] = "Nissan";
    cars[3] = "BMW";

    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars[2] << endl;
    cout << cars[3] << endl;

    return 0;
}