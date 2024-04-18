#include <iostream>
using namespace std;

int main(){
	int * iPtr=NULL;         // Declare an int pointer, and initialize the pointer to point to nothing
cout << *iPtr << endl;  // ERROR! STATUS_ACCESS_VIOLATION exception
 
int * p = NULL;     

	return 0;
}

