#include <iostream>

int main() 
{
   int students = 20;

   // addition
   // ------------------
   students = students + 1;
   students+=1;
   students++;

   // subtraction
   // ------------------
   students = students - 1;
   students-=1;
   students--;

   // multiplication
   // ------------------
   students = students * 2;
   students*=2;

   // division
   // ------------------
   students = students / 2;
   students/=2;

   // modulus
   // ------------------
   int remainder = students % 3;
   std::cout << remainder << std::endl;

   std::cout << students << std::endl;

   int students2 = 6 - 5 +4*3/2;

   return 0;
}