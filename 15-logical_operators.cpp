#include <iostream>

int main()
{
   // && - AND
   // || - OR
   // !  - NOT

   int temperature = 24;

   //if (temperature > 0 && temperature < 30)
   if (!(temperature <= 0 || temperature >= 30))
   {
      std::cout << "Good";
   } else {
      std::cout << "Bad";
   }

   return 0;
}