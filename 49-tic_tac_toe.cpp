#include <iostream>
#include <ctime>
#include <stdexcept>
#include <vector>
#include <array>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
char checkWinner(char *spaces, std::vector<std::array<int, 3>> winMap);
bool checkTie(char *spaces);
std::vector<std::array<int, 3>> getWinMap();

const char EMPTY = ' ';

int main()
{
   char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
   char player = 'X';
   char computer = 'O';
   bool running = true;
   std::srand(std::time(0));
   bool firstPlayerTurn = true;

   drawBoard(spaces);
   std::vector<std::array<int, 3>> winMap = getWinMap();

   int const MAX_LOOPS = 100;
   int loopCount = 0;
   try
   {
      while (running)
      {
         if (firstPlayerTurn)
         {
            playerMove(spaces, player);
         }
         else
         {
            computerMove(spaces, computer);
         }
         firstPlayerTurn = !firstPlayerTurn;
         drawBoard(spaces);

         if (checkTie(spaces))
         {
            std::cout << "A tie occured\n";
            running = false;
         }
         char winner = checkWinner(spaces, winMap);
         if (winner != EMPTY)
         {
            winner == player ? std::cout << "You won!\n" : std::cout << "Computer won!\n";
            running = false;
            break;
         }
         loopCount++;
         if (loopCount > MAX_LOOPS)
         {
            throw std::invalid_argument("Infinite loop prevention");
         }
      }
   }
   catch (std::invalid_argument &e)
   {
      std::cout << "Error while computing turns" << std::endl;
      std::cerr << e.what() << std::endl;
      return -1;
   }

   return 0;
}

void drawBoard(char *spaces)
{
   std::cout << '\n';
   std::cout << "     |     |     " << '\n';
   std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
   std::cout << "_____|_____|_____" << '\n';
   std::cout << "     |     |     " << '\n';
   std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
   std::cout << "_____|_____|_____" << '\n';
   std::cout << "     |     |     " << '\n';
   std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
   std::cout << "     |     |     " << '\n';
   std::cout << '\n';
}

void playerMove(char *spaces, char player)
{
   int number = 0;
   int const MAX_LOOPS = 100;
   int loopCount = 0;
   std::cout << "Player move " << std::endl;

   while (true)
   {
      std::cout << "Enter a spot to place a marker (1-9): ";
      std::cin >> number;
      std::cin.clear();
      std::cin.ignore(10000, '\n');
      number--;

      if (!(number >= 0 && number <= 8))
      {
         std::cout << "Out of range\n";
      }
      else if (spaces[number] == EMPTY)
      {
         spaces[number] = player;
         break;
      }
      else
      {
         std::cout << "Occupied\n";
      }

      loopCount++;
      if (loopCount > MAX_LOOPS)
      {
         throw std::invalid_argument("Infinite loop prevention");
      }
   }
}

void computerMove(char *spaces, char computer)
{
   std::cout << "Computer move " << std::endl;
   int number;
   int const MAX_LOOPS = 100;
   int loopCount = 0;

   while (true)
   {
      number = std::rand() % 9;
      if (!(number >= 0 && number <= 8))
      {
         std::cout << "Out of range\n";
      }
      else if (spaces[number] == EMPTY)
      {
         spaces[number] = computer;
         break;
      }
      else
      {
         std::cout << "Occupied\n";
      }

      loopCount++;
      if (loopCount > MAX_LOOPS)
      {
         throw std::invalid_argument("Infinite loop prevention");
      }
   }
}

char checkWinner(char *spaces, std::vector<std::array<int, 3>> winMap)
{
   for (std::array<int, 3> i : winMap)
   {
      //if space is not empty and 
      if (spaces[i[0]] != EMPTY && spaces[i[0]] == spaces[i[1]] && spaces[i[0]] == spaces[i[2]])
      {         
         return spaces[i[0]];
      }
   }

   return EMPTY;
}

bool checkTie(char *spaces)
{
   for (int i = 0; i < 9; i++)
   {
      if (spaces[i] == EMPTY)
      {
         return false;
      }
   }
   return true;
}

std::vector<std::array<int, 3>> getWinMap()
{
   // win conditions:
   // rows:
   // x >=0 && x <= 6 && x%3 == 0
   // x+0 x+1 x+2
   // 012
   // 345
   // 678
   // cols:
   // x>=0 && x<=2
   // x x+3 x+6
   // 036
   // 147
   // 258
   // diagonal:
   // 048
   // 246
   std::vector<std::array<int, 3>> winMap;
   // rows
   for (int i = 0; i <= 6; i += 3)
   {
      std::array<int, 3> newArray = {i, i + 1, i + 2};
      winMap.push_back(newArray);
   }
   // cols
   for (int i = 0; i <= 2; i++)
   {
      std::array<int, 3> newArray = {i, i + 3, i + 6};
      winMap.push_back(newArray);
   }
   // diagonal
   std::array<int, 3> diag1 = {0, 4, 8};
   std::array<int, 3> diag2 = {2, 4, 6};
   winMap.push_back(diag1);
   winMap.push_back(diag2);
   return winMap;
}