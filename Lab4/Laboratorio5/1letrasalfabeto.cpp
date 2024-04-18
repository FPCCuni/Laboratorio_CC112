//las letras del alfabeto español with pointers
#include <iostream>
using namespace std;
//void alfabetoEspanol()

int main(){
	
	//Sin arreglos sin punteros
	char letras = 'A';
	
	while('A' <= letras && letras <= 'Z'){
		cout << letras <<" ";
		letras++;
	}
	cout <<endl;
	
	//Con arreglos sin punteros
	char arrletras[27];
	arrletras[0]= 'A';
	for(int i=1; i < 27; i++){
		arrletras[i] = i + 'A';
		cout << arrletras[i]<<" ";
	}
	
	//***********segunda forma**************
	cout <<"\n";
	char alfabeto[27];
	char *ptr;
	ptr = alfabeto;
	
	*ptr = 'a';
	
	for (int i = 0; i < 26; i++){
		*ptr = i + 'a';
		//cout << *ptr <<" ";
		ptr++;
	}
	ptr = alfabeto; //reinicializando puntero
	
	
	cout << "Las letras del alfabeto son: "<<endl;
	for (int i = 0; i < 26; i++){
		cout << *ptr <<" ";
		ptr++;
	}
	
	
	
	
	

	return 0;
}

