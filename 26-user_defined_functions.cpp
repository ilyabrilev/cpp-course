#include <iostream>
#include <ctime>

void happyBirthday(std::string name);

int main()
{
   happyBirthday("Bro");
   happyBirthday("Code");

   return 0;
}

void happyBirthday(std::string name) {
   std::cout << "congrats " << name << "-_- ";
   std::cout << "congrats " << name << "-_- ";
   std::cout << "congrats " << name << "-_- \n";
}