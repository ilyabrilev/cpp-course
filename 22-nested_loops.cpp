#include <iostream>

int main()
{
   int rows = 0;
   int cols = 0;
   char symbol = '*';

   std::cout << "Enter rows: ";
   std::cin >> rows;
   std::cout << "Enter cols: ";
   std::cin >> cols;

   // a triangle
   // for (int i = 0; i <= rows; i++) {
   //    for (int j = 0; j <= i; j++) {
   //       std::cout << symbol;
   //    }
   //    std::cout << "\n";
   // }

   for (int i = 0; i <= rows; i++) {
      for (int j = 0; j <= cols; j++) {
         std::cout << symbol;
      }
      std::cout << "\n";
   }

   return 0;
}