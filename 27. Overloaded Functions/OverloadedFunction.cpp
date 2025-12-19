#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);     //      <-- function declaration

int main()
{
    using std::cout, std::cin, std::string, std::endl;

    bakePizza("pepperoni", "mushroom");                        //       <-- function calling

    return 0;
}

void bakePizza()
{
    std::cout << " Here is your pizza!\n";
}

void bakePizza(std::string topping1)
{
    std::cout << " Here is your " << topping1 << " pizza!\n";
}

//    ↓     function definition  
void bakePizza(std::string topping1, std::string topping2)      //      <-- function signature
{
    std::cout << " Here is your " << topping1 << " " << topping2 << " pizza!\n";
}