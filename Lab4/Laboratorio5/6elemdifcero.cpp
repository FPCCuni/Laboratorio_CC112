#include <iostream>
using namespace std;
void contrario(int * p);
int longitud(int * p); 

int main() {
	int numeros[4] = {-1,-3,-2,0};
	cout << longitud(numeros); 
	contrario(numeros);
}
int longitud(int * p){
	int l = 0;
	while (*p != 0){
		l++;
		p++;
	}
	return l;
} 

void contrario(int *p){
	int i = longitud(p) - 1;
	while(i>=0){
		cout << *(p+i--);
	}

}
