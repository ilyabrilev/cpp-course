#include <iostream>
#include <algorithm>

int getDigit(const int number);
int sumOddDigits(const std::string cardNubmer);
int sumEvenDigits(const std::string cardNubmer);

int main()
{
   std::string card = "2222400070000005";
   int sum1 = 0;
   int sum2 = 0;
   int resultSum = 0;

   std::cout << "Enter a credit card number: ";
   std::cin >> card;

   if (card.length() != 16) {
      std::cout << "Incorrect\n";
      return 0;
   }

   sum1 = sumEvenDigits(card);
   sum2 = sumOddDigits(card);   

   resultSum = sum1 + sum2;

   // std::cout << sum1 << " + " << sum2 << "\n";

   if (resultSum % 10 == 0) {
      std::cout << "Correct\n";
   } else {
      std::cout << "Incorrect\n";
   }

   return 0;
}

int getDigit(const int number)
{
   return number - '0';
}

int sumOddDigits(const std::string cardNumber)
{
   int sum = 0;
   for (int i = cardNumber.length() - 1; i >= 0; i -= 2)
   {
      // std::cout << cardNumber[i] << '\n';
      sum += getDigit(cardNumber[i]);
   }
   return sum;
}

int sumEvenDigits(const std::string cardNumber)
{
   int sum = 0;
   for (int i = cardNumber.length() - 2; i >= 0; i -= 2)
   {
      int doubled = getDigit(cardNumber[i])*2;
      // std::cout << doubled << '\n';
      sum += doubled % 10 + ((doubled / 10) % 10);
   }
   return sum;
}
