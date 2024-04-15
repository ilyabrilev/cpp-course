#include <iostream>
#include <ctime>

int globalVar = 3;
int localVar2 = 3;

void printNum(int myNum);

int main()
{
   int localVar = 1;
   int localVar2 = 1;

   std::cout << localVar << "\n";
   std::cout << globalVar << "\n";
   return 0;
}

void printNum(int myNum) {
   //std::cout << localVar; //not working
   std::cout << myNum << "\n"; //working
   int localVar2 = 1;
   std::cout << localVar2 << "\n"; //working
   std::cout << globalVar << "\n";
   std::cout << ::localVar2 << "\n";
}
