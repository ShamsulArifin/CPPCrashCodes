#include <iostream>

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    // memory address = a location in memory where data is stored
    // a memory address can be assessed with a '&' (address-of operator)

    string name = "Sam";
    int age = 21;
    bool student = true;
    double progress = 89.65;

    cout << "Address of name: " << &name << endl;
    cout << "Address of age: " << &age << endl;
    cout << "Address of student: " << &student << endl;
    cout << "Address of progress: " << &progress << endl;

    int a = 2;
    cout << "Address of a: " << &a << endl;
    int b = 3;
    cout << "Address of b: " << &b << endl;
    a = b;
    cout << "Address of a: " << &a << endl;

    auto &c = a;
    cout << c << endl;
    cout << "Address of c: " << &c << endl;

    return 0;
}