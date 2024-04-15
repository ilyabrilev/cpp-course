#include <iostream>

int main()
{
   std::string cars[] = {"Corvette", "Mustang", "Camry"};
   std::cout << sizeof(cars) << " bytes\n";
   std::cout << sizeof(cars)/sizeof(std::string) << " elements\n";

   double gpa = 2.5;
   std::cout << sizeof(gpa) << " bytes\n";

   std::string name = "Somename";
   std::cout << sizeof(name) << " bytes\n";

   char grade = 'f';
   std::cout << sizeof(grade) << " bytes\n";

   bool student;
   std::cout << sizeof(student) << " bytes\n";

   char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
   std::cout << sizeof(grades) << " bytes\n";
   std::cout << sizeof(grades)/sizeof(char) << " elements\n";

   return 0;
}