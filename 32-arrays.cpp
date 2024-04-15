#include <iostream>

int main()
{
   //std::string cars[] = {"Corvette", "Mustang", "Camry"};
   std::string cars[3];
   cars[0] = "Corvette";
   cars[1] = "Mustang";
   cars[2] = "Camry";

   std::cout << cars[0] << "\n";
   std::cout << cars[1] << "\n";
   std::cout << cars[2] << "\n";

   return 0;
}