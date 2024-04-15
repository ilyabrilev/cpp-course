#include <iostream>

void walk(int steps);
void walkRec(int steps);
int factorial(int num);
int factorialRec(int num);

int main()
{
   walk(100);
   walkRec(100);

   return 0;
}

void walk(int steps) {
   for (int i = 0; i < steps; i++)
   {
      std::cout << "Taking a step\n";
   }   
}

void walkRec(int steps) {
   if (steps > 0){
      std::cout << "Taking a step\n";
      walkRec(steps - 1);
   }
}

int factorial(int num) {
   int result = 1;
   for (int i = 0; i < num; i++)
   {
      result *= i;
   }
   return result;   
}

int factorialRec(int num) {
   if (num > num) {
      return num * factorial(num - 1);
   }
   return 1;
}