#include <iostream>

class Car {
   public:
      std::string make;
      std::string model;
      int year;
      std::string color;

      Car(std::string make, std::string model, int year, std::string color) {
         this->make = make;
         this->model = model;
         this->year = year;
         this->color = color;
      }
      
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

class Student {
   public:
      std::string name;
      int age;
      double gpa;

      Student(std::string name, int age, double gpa) {
         this->name = name;
         this->age = age;
         this->gpa = gpa;
      }

      void print() {
         std::cout << this->name << ' ' << this->age << ' ' << this->gpa << '\n';
      }
};

int main()
{
   Student student1("John", 23, 3.2);
   Student student2("Sarah", 20, 2.8);
   student1.print();
   student2.print();

   Car car1("Ford", "Mustang", 2023, "Silver");
   car1.print();

   return 0;
}
