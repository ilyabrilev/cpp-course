#include <iostream>
namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main() {

    using namespace first;
    using std::cout;
    
    int x = 0;

    cout << x;
    cout << first::x;
    cout << second::x;

    return 0;
}