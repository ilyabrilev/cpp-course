#include <iostream>

int main()
{
   std::string cars[] = {"Corvette", "Mustang", "Camry"};
   for (int i = 0; i < sizeof(cars)/sizeof(std::string); i++)
   {
      std::cout << cars[i] << " is a car\n";
   }   
   char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
   for (int i = 0; i < sizeof(grades)/sizeof(char); i++)
   {
      std::cout << grades[i] << " is a grade\n";
   }   

   return 0;
}