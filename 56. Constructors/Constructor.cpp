#include <iostream>

class Car
{
public:
  std::string maker;
  std::string name;
  std::string type;
  std::string color;
  int year;
  double topSpeed;

  Car(std::string companyName,
      std::string modelName,
      std::string CarType,
      std::string carColor,
      int makeYear,
      double speed)
  {
    // this->name = name;
    // this->maker = maker;
    // this->type = type;
    // this->color = color;
    // this->year = year;
    // this->topSpeed = topSpeed;

    name = modelName;
    maker = companyName;
    type = CarType;
    color = carColor;
    year = makeYear;
    topSpeed = speed;
  }

  void honk()
  {
    std::cout << "Honk Honk!\n";
  }
  void run()
  {
    std::cout << "Vrrrrooooooooooom!\n";
  }
  void stop()
  {
    std::cout << "Car stopped!\n";
  }
};

int main()
{
  using std::cout, std::cin, std::string, std::endl;

  // constructor = special method that is automatically called when an object is instantiated
  //               useful for assigning values to attributes as arguments

  Car jdm1("Nissan Motor Co., Ltd.", "Nissan Skyline R34 V-Spec II (1999)", "Sports sedan", "Royal Blue", 1999, 180.0);
  Car jdm2("Mazda Motor Corporation", "Mazda RX-7", "Two-door hatchback", "Cosmic Purple", 1993, 156.0);
  Car jdm3("Toyota Motor Corporation", "Toyota Sprinter Trueno", "Sport compact", "Super White", 1986, 190.0);

  cout << jdm1.name << endl;
  cout << jdm1.type << endl;
  cout << jdm1.year << endl;
  cout << jdm1.maker << endl;
  cout << jdm1.color << endl;

  std::cout << " " << '\n';
  std::cout << "⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗" << '\n';
  std::cout << " " << '\n';

  cout << jdm2.name << endl;
  cout << jdm2.type << endl;
  cout << jdm2.year << endl;
  cout << jdm2.maker << endl;
  cout << jdm2.color << endl;

  std::cout << " " << '\n';
  std::cout << "⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗⊗" << '\n';
  std::cout << " " << '\n';

  cout << jdm3.name << endl;
  cout << jdm3.type << endl;
  cout << jdm3.year << endl;
  cout << jdm3.maker << endl;
  cout << jdm3.color << endl;

  return 0;
}