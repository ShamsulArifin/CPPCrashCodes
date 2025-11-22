#include <iostream>

using namespace std;

int main()
{
    // the const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // read only

    const double PI = 3.14159;
    // PI = 420.69;     will cause error
    double radius = 10;
    double circumference = 2 * PI * radius;

    cout << circumference << " cm" << endl;

    // More examples
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 720;

    return 0;
}