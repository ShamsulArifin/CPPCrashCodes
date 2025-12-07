#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    using std::string;

    /*
    type conversion = conversion of a value of one data type to another data type
    Implicit = Automatic
    Explicit = Precede value with new data type (int) x
    */

    // int x =  3.14;
    // cout << x << endl;

    // double x = 3.14;
    // cout << x << endl;

    float x = (int)3.14;
    cout << x << endl;

    char c = 100;
    cout << c << endl;

    cout << (char)100 << endl;

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    cout << score << "%" << endl;

    return 0;
}