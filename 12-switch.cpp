#include <iostream>

int main()
{
   int month;

   std::cout << "Enter month: ";
   std::cin >> month;

   switch (month)
   {
   case 1:
      std::cout << "Its Jan";
      break;
   case 2:
      std::cout << "Its Feb";
      break;
   default:
      std::cout << "Other";
      break;
   }

   return 0;
}