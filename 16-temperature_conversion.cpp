#include <iostream>

int main()
{
   double temperature = 24;
   char unit;
   double result;

   std::cout << "Enter unit to convert to ";
   std::cin >> unit;  

   if (unit == 'F' || unit == 'f') {
      std::cout << "Enter temperature in celcius ";
      std::cin >> temperature;

      result = 1.8*temperature + 32.0;
   } else if (unit == 'C' || unit == 'c') {
      std::cout << "Enter temperature in fahrenheight ";
      std::cin >> temperature;
      result = (temperature - 32.0)/1.8;
   } else {
      std::cout << "Wrong unit";
      return 0;
   }

   std::cout << "The result is: " << result;

   return 0;
}