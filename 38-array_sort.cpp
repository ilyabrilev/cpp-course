#include <iostream>

void sort(int array[], int size);

int main()
{   
   int numbers[] = {10, 8, 4, 6, 5, 7, 3, 9, 2, 1};
   int size = sizeof(numbers)/sizeof(int);

   sort(numbers, size);

   for (int i = 0; i < size; i++) {
      std::cout << numbers[i] << " ";
   }

   return 0;
}

void sort(int array[], int size) {
   for (int i = 0; i < size - 1; i++) {
      for (int j = 0; j < size - i - 1; j++) {
         if (array[j] > array[j+1]) {
            int temp = array[j+1];
            array[j+1] = array[j];
            array[j] = temp;
         }
      }
   }
}