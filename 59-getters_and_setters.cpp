#include <iostream>

class Stove
{
private:
   int temperature = 0;

public:
   Stove(int temperature)
   {
      this->setTemperature(temperature);
   }

   int getTemperature()
   {
      return this->temperature;
   }

   void setTemperature(int temperature)
   {
      if (temperature < 0)
      {
         this->temperature = 0;
      }
      else if (temperature >= 10)
      {
         this->temperature = 10;
      }
      else
      {
         this->temperature = temperature;
      }
   }
};

int main()
{
   Stove stove(0);
   stove.setTemperature(10000000);

   std::cout << stove.getTemperature() << '\n';

   return 0;
}
