#include <iostream>

int main()
{
   double a;
   double b;
   char op;
   double result = 0;

   std::cout << "**************** CALCULATOR ****************\n";

   std::cout << "Enter a: ";
   std::cin >> a;

   std::cout << "Enter b: ";
   std::cin >> b;

   std::cout << "Enter operator (+ - * /): ";
   std::cin >> op;

   switch (op)
   {
   case '+':
      result = a + b;
      break;
   case '-':
      result = a - b;
      break;
   case '*':
      result = a * b;
      break;
   case '/':
      result = a / b;
      std::cout << a / b;
      break;
   default:
      std::cout << "NaN\n";
      break;
   }

   std::cout << result;
   std::cout << "\n********************************************\n";

   return 0;
}