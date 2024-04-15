#include <iostream>

// int max(int x, int y);
// double max(double x, double y);
// char max(char x, char y);

template <typename T, typename U>
auto max(T x, U y);

int main()
{
   std::cout << max(5,7.7) << '\n';

   return 0;
}

// int max(int x, int y) {
//    return (x > y) ? x : y;
// }

// double max(double x, double y) {
//    return (x > y) ? x : y;
// }

// char max(char x, char y) {
//    return (x > y) ? x : y;
// }

template <typename T, typename U>
auto max(T x, U y) {
   return (x > y) ? x : y;
}