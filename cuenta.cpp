/***********************
* Clase cuenta bancaria *
************************/
#include <iostream>
#include <cassert>
using namespace std;
/*****************************************************
*1. Definición de la clase y declaración de miembros *
******************************************************/
class Account {
private:
    long accNumber;
    double balance;
    static int base; // 
public:
    Account (double bal); // 
    ~Account (); // 
    void checkBalance () const; // 
    void deposit (double amount); 
    void withdraw (double amount); 
};
// Inicialización de mimebro de dato static
int Account :: base = 0;
/****************************************
*2. Definición de las funciones miembro *
*****************************************/

// 
Account ::Account (double bal) :balance (bal){
    if (bal < 0.0){
        cout << "Balance is negative; program terminates";
        assert (false);
    }
    base++;
    accNumber = 100000 + base;
    cout << "Account " << accNumber << " is opened. " << endl;
    cout << "Balance $" << balance << endl << endl;
}
// 
Account :: ~Account () {
    cout << "Account #: " << accNumber << " is closed." << endl;
    cout << "$" << balance << " was sent to the customer." << endl <<endl;
}
//
void Account :: checkBalance () const {
    cout << "Account #: " << accNumber << endl;
    cout << "Transaction: balance check" << endl;
    cout << "Balance: $" << balance << endl<< endl;
}
// 
void Account :: deposit (double amount){
    if (amount > 0.0){
        balance += amount;
        cout << "Account #: " << accNumber << endl;
        cout << "Transaction: deposit of $" << amount << endl;
        cout << "New balance: $" << balance << endl << endl;
    }
    else{
        cout << "Transaction aborted." << endl;
    }
}
//
void Account :: withdraw (double amount){
    if (amount > balance){
        amount = balance;
    }
    balance -= amount;
    cout << "Account #: " << accNumber << endl;
    cout << "Transaction: withdraw of $" << amount << endl;
    cout << "New balance: $" << balance << endl << endl;
}
/*****************************************
*3. Applicación: uso de la clase Account *
******************************************/
int main ( ) {
    // Creacion de 3 cuentas
    Account acc1 (2000);
    Account acc2 (5000);
    Account acc3 (1000);
    // Transaction
    acc1.deposit (150);
    acc2.checkBalance ();
    acc1.checkBalance ();
    acc3.withdraw (800);
    acc1.withdraw (1000);
    acc2.deposit (120);
    return 0;
}