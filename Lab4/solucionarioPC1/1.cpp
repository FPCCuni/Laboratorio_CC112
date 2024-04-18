// 1.cpp

#include <iostream>
#include <string>

using namespace std;

bool LetrasIguales(char L1, char L2) {
  // Convert to lowercase
  L1 = tolower(L1);
  L2 = tolower(L2);

  // Compare
  return L1 == L2;
}

bool EsPalindromo(string frase, int i, int j) {
  // Caso base: if indices cross, phrase is palindrome
  if (i >= j) {
    return true;
  }

  // Skip spaces
  while (i < j && isspace(frase[i])) {
    i++;
  }
  while (i < j && isspace(frase[j])) {
    j--;
  }

  // If letters are equal, advance recursion
  if (LetrasIguales(frase[i], frase[j])) {
    return EsPalindromo(frase, i + 1, j - 1);
  }

  // If letters are different, not a palindrome
  return false;
}

int main() {
  string frase;

  // Get phrase from user
  cout << "Ingrese una frase: ";
  getline(cin, frase);

  // Eliminate spaces manually
  string sinEspacios;
  for (char c : frase) {
    if (!isspace(c)) {
      sinEspacios += c;
    }
  }

  // Check if palindrome
  if (EsPalindromo(sinEspacios, 0, sinEspacios.length() - 1)) {
    cout << "La frase es un palíndromo." << endl;
  } else {
    cout << "La frase no es un palíndromo." << endl;
  }

  return 0;
}
