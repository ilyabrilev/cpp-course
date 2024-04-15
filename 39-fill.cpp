#include <iostream>

int main()
{
   const int SIZE = 100;
   std::string foods[SIZE];
   fill(foods, foods + (SIZE/2), "pizza");
   fill(foods + (SIZE/2), foods + SIZE, "sushi");
   
   for (std::string food : foods)
   {
      std::cout << food << " ";
   }
   

   return 0;
}