#include <iostream>

int main()
{
   int grade = 75;
   std::string result;

   result = grade < 70 ? "You failed" : "You passed";
   // std::cout << (grade < 70 ? "You failed" : "You passed");
   // grade < 70 ? std::cout << "You failed" : std::cout << "You passed";

   std::cout << result;
   std::cout << "\n\n";

   return 0;
}