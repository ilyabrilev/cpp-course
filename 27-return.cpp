#include <iostream>
#include <ctime>

double square(double length);
double cube(double length);
std::string concat(std::string string1, std::string string2);

int main()
{
   // std::cout << square(10);

   std::cout << concat("Bro", "Code");

   return 0;
}

double square(double length) {
   return length * length;
}

double cube(double length) {
   return length * length * length;
}

std::string concat(std::string string1, std::string string2) {
   return string1 + " " + string2;
}