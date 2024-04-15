#include <iostream>

void swapByVal(std::string x, std::string y);
void swapByRef(std::string &x, std::string &y);

int main()
{
   std::string x = "Juce";
   std::string y = "Water";

   // std::string temp;
   // temp = x;
   // x = y;
   // y = temp;


   std::cout << "X: " << &x << '\n';
   std::cout << "Y: " << &y << '\n';

   swapByVal(x, y);
   std::cout << "X: " << x << '\n';
   std::cout << "Y: " << y << '\n';

   swapByRef(x, y);
   std::cout << "X: " << x << '\n';
   std::cout << "Y: " << y << '\n';

   return 0;
}

void swapByVal(std::string x, std::string y)
{
   std::cout << "X: " << &x << '\n';
   std::cout << "Y: " << &y << '\n';

   std::string temp;
   temp = x;
   x = y;
   y = temp;
}

void swapByRef(std::string &x, std::string &y)
{
   std::cout << "X: " << &x << '\n';
   std::cout << "Y: " << &y << '\n';
   
   std::string temp;
   temp = x;
   x = y;
   y = temp;
}