#include <iostream>
#include <algorithm>

void check(std::string *p);

int main()
{
   std::string name = "FirstName";
   std::string *pName = &name;
   std::cout << pName << '\n';
   std::cout << *pName << '\n';

   int age = 100;
   int *pAge = &age;
   std::cout << pAge << '\n';
   std::cout << *pAge << '\n';

   std::string freePizzas[5] = {"p1", "p2", "p3", "p4", "p5"};
   // std::string *pFreePizzas = &freePizzas;
   std::cout << freePizzas << '\n';
   std::cout << *freePizzas << '\n';

   check(freePizzas);

   check(&name);

   return 0;
}

//p is a pointer to the first element
void check(std::string *p) {
   std::cout << p << std::endl;
   std::cout << p[0] << std::endl;
   std::cout << p[1] << std::endl;
}