#include <iostream>

int main()
{
   int breaks = 0;
   int continues = 0;
   int normal = 0;

   for (int i = 0; i < 20; i++) {
      if (i % 3 == 0) {
         continues++;
         continue;
      }
      if (i == 13) {
         breaks++;
         break;
      }

      normal++;
   }
   std::cout << continues;
   std::cout << breaks;
   std::cout << normal;

   return 0;
}