#include <iostream>

int main()
{
   std::string name;

   std::cout << "Enter your name: ";
   std::getline(std::cin, name);

   std::cout << name.length() << "\n";
   std::cout << name.empty() << "\n";
   //name.clear();
   name.append("@gmail.com");
   std::cout << name << "\n";

   std::cout << name.at(0) << "\n";
   name.insert(3, "@gmail");
   std::cout << name << "\n";

   std::cout << name.find(' ') << "\n";

   name.erase(3, 4);
   std::cout << name << "\n";

   return 0;
}