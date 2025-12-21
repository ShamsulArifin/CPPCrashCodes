#include <iostream>

double getTotal(double prices[], int size);

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    double prices[] = {49.99, 15.05, 75, 99.9};
    int size = sizeof(prices) / sizeof(double);
    double total = getTotal(prices, size);

    cout << "$: " << total;

    return 0;
}

double getTotal(double prices[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }

    return total;
}