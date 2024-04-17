#include <iostream>
int main()
{
    int *ptr1 = NULL ;//o usa = nullptr
if(ptr1 != NULL)
{
	printf("direccion legal indicada\n");
}
else{
    printf("direccion legal no indicada\n");
}
return 0;
}