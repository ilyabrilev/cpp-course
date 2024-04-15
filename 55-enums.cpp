#include <iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2, friday = 3};
enum Flavor {vanila, chocolate, strawberry};

int main()
{
   // std::string today = "sunday";

   // switch(today) {
   //    case "sunday":
   //       std::cout << "It's sunday";
   //       break;
   //    case "monday":
   //       std::cout << "It's monday";
   //       break;
   // }

   Day today = friday;

   switch(today) {
      case sunday:
         std::cout << "It's Sunday";
         break;
      case monday:
         std::cout << "It's Monday";
         break;
      case friday:
         std::cout << "It's Friday";
         break;
   }

   return 0;
}
