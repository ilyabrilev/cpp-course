#include <iostream>
#include <ctime>

int main()
{

   int num;
   int guess;
   int tries = 0;

   srand(time(0));
   num = rand() % 100 + 1;

   do {
      std::cout << "Enter a guess\n";
      std::cin >> guess;
      tries++;

      if (guess > num) {
         std::cout << "Too hight\n";
      }else if (guess < num) {
         std::cout << "Too low\n";         
      } else {
         std::cout << "Correct # of tries: " << tries << "\n";         
      }

   } while (guess != num);

   return 0;
}