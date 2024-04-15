#include <iostream>

int main()
{
   int number;

   do
   {
      std::cout << "Enter a number: ";
      std::cin >> number;
   } while (number < 0);

   std::cout << "This is " << number << "\n";

   return 0;
}