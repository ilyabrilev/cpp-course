#include <iostream>
#include <iomanip>
#include <map>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);
void chooseWinnerHashmap(char player, char computer);

const std::string TIE_STR = "Your powers are equal.\n";
const std::string WIN_STR = "You are stronger than computer!\n";
const std::string LOSE_STR = "You are no match for the mighty computer!!!\n";

int main()
{
   char player;
   char computer;

   player = getUserChoice();
   std::cout << "Your choice is: ";
   showChoice(player);
   std::cout << "\n";

   computer = getComputerChoice();
   std::cout << "Computer choice is: ";
   showChoice(computer);
   std::cout << "\n";

   chooseWinnerHashmap(player, computer);

   return 0;
}

char getUserChoice()
{
   char player;

   do
   {
      std::cout << "Select something: r/p/s\n";
      std::cin >> player;
   } while (player != 'r' & player != 'p' && player != 's');

   return player;
}

char getComputerChoice()
{
   srand(time(0));
   int num = rand() % 3;
   char choice = 's';

   switch (num)
   {
   case 1:
      choice = 'r';
      break;
   case 2:
      choice = 's';
      break;
   case 3:
      choice = 'p';
      break;

   default:
      break;
   }

   return choice;
}

void showChoice(char choice)
{
   switch (choice)
   {
   case 'p':
      std::cout << "Paper";
      break;
   case 's':
      std::cout << "Scissors";
      break;
   case 'r':
      std::cout << "Rock";
      break;

   default:
      std::cout << "Wat?";
      break;
   }
}

void chooseWinner(char player, char computer)
{
   std::cout << "Result: ";
   if (player == computer)
   {
      std::cout << TIE_STR;
      return;
   }

   switch (player)
   {
   case 'p':
      if (computer == 'r')
      {
         std::cout << WIN_STR;
      }
      else
      {
         std::cout << LOSE_STR;
      }
      break;
   case 'r':
      if (computer == 's')
      {
         std::cout << WIN_STR;
      }
      else
      {
         std::cout << LOSE_STR;
      }
      break;
   case 's':
      if (computer == 'p')
      {
         std::cout << WIN_STR;
      }
      else
      {
         std::cout << LOSE_STR;
      }
      break;
   default:
      std::cout << "Throw new error";
      break;
   }
}

void chooseWinnerHashmap(char player, char computer)
{
   std::map<char, std::map<char, std::string>> winHashMap;

   winHashMap = {
      {'p', {
         {'p', TIE_STR},
         {'r', WIN_STR},
         {'s', LOSE_STR}
      }},
      {'s', {
         {'s', TIE_STR},
         {'p', WIN_STR},
         {'r', LOSE_STR}
      }},
      {'r', {
         {'r', TIE_STR},
         {'s', WIN_STR},
         {'p', LOSE_STR}
      }}
   };

   std::cout << "Result: ";
   std::string result = winHashMap[player][computer];
   if (result != "") {
      std::cout << result;
   } else {
      std::cout << "Error";
   }
}
