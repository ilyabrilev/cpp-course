#include <iostream>
#include <ctime>

int main()
{
   srand(time(0));
   int randNum = rand() % 5 + 1;

   switch(randNum) {
      case 1:
         std::cout << "You win something 1";
         break;
      case 2:
         std::cout << "You win something 2";
         break;
      case 3:
         std::cout << "You win something 3";
         break;
      case 4:
         std::cout << "You win something 4";
         break;
      case 5:
         std::cout << "You win something 5";
         break;
      default:
         std::cout << "You win nothing";
         break;
   }

   return 0;
}