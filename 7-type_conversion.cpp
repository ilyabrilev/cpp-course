#include <iostream>

int main()
{
    int x = 3.14;
    double x2 = (int) 3.14;

    std::cout << x << std::endl;
    std::cout << x2 << std::endl;    
    
    int correct = 8;
    int questions = 10;
    // double score = correct/questions * 100;  //0%
    double score = correct/(double)questions * 100; //80%

    std::cout << score << "%";

    return 0;
}