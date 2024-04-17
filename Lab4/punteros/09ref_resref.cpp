#include <iostream>
int main()
{
    int *variable;
    int var=10;
    std::cout << var << '\n';
    std::cout << &var << '\n';
    std::cout << *(&var) << '\n';
    
    return 0;
}