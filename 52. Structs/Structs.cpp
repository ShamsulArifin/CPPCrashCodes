#include <iostream>

struct student
{
  std::string name;
  double gpa;
  bool enrolled;
};

int main()
{
  using std::cout, std::cin, std::string, std::endl;

  // struct = a structure that group related variables under one name
  //          structs can contain many different data types (string, char, double, boolean)
  //          variables in a struct are known as "members"
  //          members can be accessed with '.' "Class Member Access Operator"

  student studentA;
  studentA.enrolled = true;
  studentA.gpa = 2.86;
  studentA.name = "Sam";

  student studentB;
  studentB.enrolled = true;
  studentB.gpa = 2.36;
  studentB.name = "Wolf";

  cout << studentA.name << endl;
  cout << studentA.gpa << endl;
  cout << studentA.enrolled << endl;

  cout << studentB.name << endl;
  cout << studentB.gpa << endl;
  cout << studentB.enrolled << endl;

  return 0;
}