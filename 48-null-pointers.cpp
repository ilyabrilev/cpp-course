#include <iostream>
#include <algorithm>

int main()
{
   int *pointer = nullptr;
   int x = 123;

   pointer = &x;

   if (pointer == nullptr) {
      std::cout << "Address error\n";
      //std::cout << *pointer;    // WTF BOOM!!!
   } else {
      std::cout << "Address assigned\n";  
      std::cout << *pointer;    
   }

   return 0;
}