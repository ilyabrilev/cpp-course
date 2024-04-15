#include <iostream>
#include <iomanip>

void showBallance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
   double balance = 123.45;
   int choice = 0;

   do
   {
      std::cout << "Enter your choice\n";
      std::cout << "1. Show balance\n";
      std::cout << "2. Deposit\n";
      std::cout << "3. Withdraw\n";
      std::cout << "4. Exit\n";
      std::cin >> choice;
      std::cin.clear();
      fflush(stdin);

      switch (choice)
      {
      case 1:
         showBallance(balance);
         break;
      case 2:
         balance += deposit();
         showBallance(balance);
         break;
      case 3:
         balance -= withdraw(balance);
         showBallance(balance);
         break;
      case 4:
         std::cout << "Tnxs\n";
         break;
      default:
         std::cout << "Invalid choice\n";
      }
   } while (choice != 4);

   return 0;
}

void showBallance(double balance)
{

   std::cout << "Your balance is $" << std::setprecision(2) << std::fixed << balance << "\n";
}

double deposit()
{
   double amount = 0;

   std::cout << "Enter amount to deposit\n";
   std::cin >> amount;

   if (amount < 0)
   {
      std::cout << "Amount must be more than 0\n";
      return 0;
   }

   return amount;
}

double withdraw(double balance)
{
   double amount = 0;

   std::cout << "Enter amount to withdraw\n";
   std::cin >> amount;

   if (amount < 0)
   {
      std::cout << "Amount must be more than 0\n";
      return 0;
   }

   if (amount > balance)
   {
      std::cout << "Insufficient funds\n";
      return 0;
   }

   return amount;
}
