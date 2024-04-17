/*Escribe un programa para imprimir la dirección de una
 variable cuyo valor ingresa el usuario.*/
 #include <iostream>
 using namespace std;
 
 int main(){
    int n;
    cout << "Ingrese el valor de n";
    cin >> n;

    cout << "La dirección de n es: " << &n << endl; // & = dirección de 
 
    return 0; 
 }