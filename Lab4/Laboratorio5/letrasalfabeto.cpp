//las letras del alfabeto español with pointers
#include <iostream>
using namespace std;
//void alfabetoEspanol()

int main(){
	
	char letras = 'A';
	
	while('A' <= letras && letras <= 'Z'){
		cout << letras <<" ";
		letras++;
	}
	

	return 0;
}

