#include <iostream>

struct Car {
   std::string model;
   int year;
   std::string color;
};

void printCar(Car car);
void printCar2(Car &car);
void paintCar(Car &car, std::string color);

int main()
{
   Car car1;
   Car car2;

   car1.model = "Mustang";
   car1.year = 2023;
   car1.color = "red";

   car2.model = "Corvette";
   car2.year = 2020;
   car2.color = "blue";

   paintCar(car1, "silver");
   paintCar(car2, "gold");

   std::cout << &car1 << '\n';
   printCar(car1);
   printCar2(car1);

   std::cout << &car2 << '\n';
   printCar(car2);
   printCar2(car2);

   return 0;
}

void printCar(Car car){
   std::cout << &car << '\n';
   std::cout << car.model << '\n';
   std::cout << car.year << '\n';
   std::cout << car.color << '\n';
}

void printCar2(Car &car){
   std::cout << &car << '\n';
   std::cout << car.model << '\n';
   std::cout << car.year << '\n';
   std::cout << car.color << '\n';
}

void paintCar(Car &car, std::string color) {
   car.color = color;
}
