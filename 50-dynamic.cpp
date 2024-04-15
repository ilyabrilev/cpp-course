#include <iostream>

void newInt();
void newStr();

int main()
{
   newStr();

   return 0;
}

void newInt()
{
   int *pNum = nullptr;
   pNum = new int;

   *pNum = 21;

   std::cout << pNum << "\n";
   std::cout << *pNum << "\n";

   delete pNum;
}

void newStr()
{
   char *pGrades = NULL;
   int size;

   std::cout << "Enter size\n";
   std::cin >> size;

   pGrades = new char[size];

   for (int i = 0; i <size; i++) {
      std::cout << "Enter grade #" << i +1 << ": ";
      std::cin >> pGrades[i];
   }

   for (int i = 0; i <size; i++) {
      std::cout << pGrades[i] << "\n";
   }

   delete[] pGrades;
}