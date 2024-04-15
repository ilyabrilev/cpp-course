#include <iostream>

int main()
{
   std::string questions[] = {
      "1. What year was C++ created?",
      "2. Question no 2",
      "3. What is the predecessor of C++?",
      "4. Are you feeling lonely?",
   };

   std::string options[][4] = {
      {"A. 1669", "B. 1975", "C. 1985", "D. 1989"},
      {"A. Wrong", "B. Correct", "C. Wrong", "D. Wrong"},
      {"A. C", "B. B", "C. C+", "D. C--"},
      {"A. Yes", "B. No", "C. I dont care", "D. Sometimes"},
   };

   char answerKey[] = {'C', 'B', 'A', 'C'};

   int size = sizeof(questions)/sizeof(std::string);
   char guess;
   int score = 0;

   for (int i = 0; i < size; i++)
   {
      std::cout << "\n" << questions[i] << "\n";
      for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++) {
         std::cout << options[i][j] << "\n";
      }
      std::cin >> guess;
      guess = toupper(guess);
      if (guess == answerKey[i]) {
         std::cout << "Correct\n";
         score++;
      } else {
         std::cout << "Wrong! Correct answer is: " << answerKey[i] << "\n";
      }
   }
   std::cout << "Your score is: " << score/double(size)*100 << "%\n";

   return 0;
}