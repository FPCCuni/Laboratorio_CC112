#include <iostream>
int main()
{
    int array[3] = { 11, 12, 13 };
    int *ptr = array;//
    
    std::cout <<"\nElemento base : \n"<< ptr<<" array[0]= "<<*(ptr);
    std::cout <<"\nSegundo elemento: \n"<< ptr+1 <<" array= "<<*(ptr+1);
    std::cout <<"\nTercer elemento: \n"<< ptr+2 <<" array= "<<*(ptr+2);
    
    return 0;
}