#include <iostream>

class Animal
{
public:
   bool alive = true;
   std::string speciesName;

   void eat()
   {
      std::cout << speciesName << " is eating\n";
   }
};

class Dog : public Animal
{
public:
   Dog() {
      this->speciesName = "Dog";
   }
   void bark()
   {
      std::cout << "Bark Bark\n";
   }
};

class Cat : public Animal
{
public:
   Cat() {
      this->speciesName = "Cat";
   }
   void meow()
   {
      std::cout << "The cat goes meow\n";
   }
};

int main()
{
   Dog dog;
   dog.eat();
   dog.bark();

   Cat cat;
   cat.eat();
   cat.meow();

   return 0;
}
