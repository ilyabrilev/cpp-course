#include <iostream>

struct student {
   std::string name;
   double gpa;
   bool enrolled = false;
};

int main()
{
   student student1;
   student1.name = "Name";
   student1.gpa = 3.2;
   student1.enrolled = true;

   std::cout << student1.name << '\n';
   std::cout << student1.gpa << '\n';
   std::cout << student1.enrolled << '\n';

   student student2;
   student2.name = "Name 2";
   student2.gpa = 2.1;
   // student2.enrolled = true;

   std::cout << student2.name << '\n';
   std::cout << student2.gpa << '\n';
   std::cout << student2.enrolled << '\n';

   return 0;
}
