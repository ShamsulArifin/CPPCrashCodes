#include <iostream>
#include <cmath>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::string;

    double a;
    double b;
    double c;

    cout << "Enter value of 'a': ";
    cin >> a;

    cout << "Enter value of 'b': ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "Hypotenuse: " << c;

    return 0;
}