#include <iostream>

int main()
{
   std::string cars[] = {"Corvette", "Mustang", "Camry"};
   
   for (std::string car : cars)
   {
      std::cout << car << " is a car\n";
   }   

   char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
   for (char grade : grades)
   {
      std::cout << grade << " is a grade\n";
   }   

   return 0;
}