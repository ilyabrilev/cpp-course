#include <iostream>
#include <cmath>

int main()
{
   int age;

   std::cout << "Enter age: ";
   std::cin >> age;

   if (age >= 18)
   {
      std::cout << "You are allowed";
   }
   else if (age < 0) {
      std::cout << "Error";
   }
   else
   {
      std::cout << "You are NOT allowed";
   }

   return 0;
}