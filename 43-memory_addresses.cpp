#include <iostream>

int main()
{
   std::string name = "String of text";
   int age = 30;
   bool student = false;

   std::cout << &name << '\n';
   std::cout << &age << '\n';
   std::cout << &student << '\n';

   return 0;
}