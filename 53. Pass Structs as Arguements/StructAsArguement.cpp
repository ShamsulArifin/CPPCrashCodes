#include <iostream>

struct Car
{
  std::string model;
  int year;
  std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);

main()
{
  using std::cout, std::cin, std::string, std::endl;

  Car jdm1;
  Car jdm2;

  jdm1.model = "Nissan Skyline 2000 GT-R";
  jdm1.year = 1971;
  jdm1.color = "Silver Grey";

  jdm2.model = "Nissan Skyline R34 V-Spec ||";
  jdm2.year = 1999;
  jdm2.color = "Royal Blue";

  cout << &jdm1 << endl;

  paintCar(jdm1, "Emerald Green");
  paintCar(jdm2, "Wine Red");

  printCar(jdm1);
  printCar(jdm2);

  return 0;
}

void printCar(Car &car)
{
  std::cout << "⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗" << '\n';
  std::cout << &car << '\n';
  std::cout << car.model << '\n';
  std::cout << car.year << '\n';
  std::cout << car.color << '\n';
  std::cout << "⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗" << '\n';
  std::cout << " " << '\n';
}

void paintCar(Car &car, std::string color)
{
  car.color = color;
}