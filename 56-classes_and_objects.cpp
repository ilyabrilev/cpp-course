#include <iostream>

class Car {
   public:
      std::string make;
      std::string model;
      int year;
      std::string color;

      void accelerate() {
         std::cout << "Acceleration";
      }

      void brake() {
         std::cout << "Brakes";
      }

      void print() {
         std::cout << this->color << ' ' << this->make << ' ' << this->model << ' ' << this->year << '\n';
      }
};

class Human {
   public: 
      std::string name;
      std::string occupation;
      int age;
      Car *car;

      void eat() {
         std::cout << this->occupation << ' ' << this->name << " is eating...\n";
      }

      void drink() {
         std::cout << this->occupation << ' ' << this->name << " is drinking...\n";
      }

      void sleep() {
         std::cout << this->occupation << ' ' << this->name << " is sleaping...\n";
      }

      void print() {
         std::cout << this->occupation << ' ' << this->name << " is " << this->age << " years old\n";
         std::cout << "Has a car: \n";
         this->car->print();
      }
};

int main()
{
   Human human1;

   human1.name = "Rick";
   human1.occupation = "Scientiest";
   human1.age = 70;

   human1.eat();
   human1.drink();
   human1.sleep();

   Car car1;
   car1.make = "Ford";
   car1.model = "Mustang";
   car1.year = 2023;
   car1.color = "Silver";

   human1.car = &car1;

   human1.print();

   return 0;
}
