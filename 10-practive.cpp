#include <iostream>
#include <cmath>

int main() 
{
   double a = 4;
   double b = 4;

   std::cout << "Enter a: ";
   std::cin >> a;

   std::cout << "Enter b: ";
   std::cin >> b;

   double c = sqrt(pow(a,2) + pow(b,2));

   std::cout << c;

   return 0;
}