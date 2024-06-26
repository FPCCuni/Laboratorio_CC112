# Resumen: Introducción al uso de clases y objetos en C++
* Las clases y objetos son fundamentales para la programación orientada a objetos.
  Una clase define un nuevo tipo de datos que puede tener **atributos** (variables) y
  **métodos** (funciones). Un **objeto** es una instancia de una clase.

    Ejemplo 1: clases y objetos

    ```cpp
    #include <iostream>
    using namespace std;

    class Persona {
        string nombre;
        int edad;

    public:
        void mostrarInfo() {
            cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
        }
    };

    int main() {
        Persona p1;
        p1.nombre = "Pedro";
        p1.edad = 23;
        p1.mostrarInfo();

        return 0;
    }

    ```

* Los atributos son variables que pertenecen a una clase. Los métodos son funciones que operan
  sobre los atributos de la clase. Pueden ser públicos (accesibles desde fuera de la clase) o 
  privados (accesibles solo dentro de la clase).

  Ejemplo 2 

  ```cpp
    #include <iostream>
    using namespace std;

    class Rectangulo {
    private:
        double largo;
        double ancho;

    public:
        void establecerDimensiones(double l, double a) {
            largo = l;
            ancho = a;
        }

        double calcularArea() {
            return largo * ancho;
        }
    };

    int main() {
        Rectangulo rect;
        rect.establecerDimensiones(5.0, 3.0);
        cout << "Área del rectángulo: " << rect.calcularArea() << endl;

        return 0;
    }
  ```

* Los **constructores** son métodos especiales que se invocan automáticamente cuando se crea un objeto de una clase. Sirven para inicializar los atributos del objeto. Los **destructores**, por otro lado, se invocan automáticamente cuando el objeto se destruye, y se utilizan para liberar recursos.

    Ejemplo 3 

    ```cpp
    #include <iostream>
    using namespace std;

    class CuentaBancaria {
    private:
        double saldo;

    public:
        // Constructor
        CuentaBancaria(double saldoInicial) {
            saldo = saldoInicial;
            cout << "Cuenta creada con saldo: " << saldo << endl;
        }

        // Destructor
        ~CuentaBancaria() {
            cout << "Cuenta con saldo " << saldo << " está siendo destruida." << endl;
        }

        void depositar(double cantidad) {
            saldo += cantidad;
        }

        void retirar(double cantidad) {
            if (cantidad <= saldo) {
                saldo -= cantidad;
            } else {
                cout << "Fondos insuficientes" << endl;
            }
        }

        double obtenerSaldo() {
            return saldo;
        }
    };

    int main() {
        CuentaBancaria cuenta(1000.0);
        cuenta.depositar(200.0);
        cout << "Saldo después del depósito: " << cuenta.obtenerSaldo() << endl;
        cuenta.retirar(150.0);
        cout << "Saldo después del retiro: " << cuenta.obtenerSaldo() << endl;

        return 0;
    }
    ```

    Tenemos los siguiente tipos de constructores:

    **Constructor por defecto** Es un constructor que puede ser llamado sin ningún argumento. Si no se define ningún constructor, el compilador proporciona uno implícitamente.

    ```cpp
    #include <iostream>
    using namespace std;

    class Punto {
    private:
        int x, y;

    public:
        // Constructor por defecto
        Punto() {
            x = 0;
            y = 0;
        }

        void mostrar() {
            cout << "Punto(" << x << ", " << y << ")" << endl;
        }
    };

    int main() {
        Punto p; // Llama al constructor por defecto
        p.mostrar();

        return 0;
    }
    ```

    **Constructor parametrizado** acepta uno o más argumentos para inicializar los atributos del objeto.

    ```cpp
    #include <iostream>
    using namespace std;

    class Punto {
    private:
        int x, y;

    public:
        // Constructor parametrizado
        Punto(int xVal, int yVal) {
            x = xVal;
            y = yVal;
        }

        void mostrar() {
            cout << "Punto(" << x << ", " << y << ")" << endl;
        }
    };

    int main() {
        Punto p(10, 20); // Llama al constructor parametrizado
        p.mostrar();

        return 0;
    }
    ```

    **Constructor de copia** crea un nuevo objeto como una copia exacta de un objeto existente. Es útil para crear duplicados de objetos.

    ```cpp
        #include <iostream>
        using namespace std;

        class Punto {
        private:
            int x, y;

        public:
        // Constructor parametrizado
        Punto(int xVal, int yVal) {
            x = xVal;
            y = yVal;
        }

        // Constructor de copia
        Punto(const Punto &p) {
            x = p.x;
            y = p.y;
        }

        void mostrar() {
            cout << "Punto(" << x << ", " << y << ")" << endl;
        }
    };

    int main() {
        Punto p1(10, 20); // Llama al constructor parametrizado
        Punto p2 = p1; // Llama al constructor de copia
        p2.mostrar();

        return 0;
    }
    ```

* Las **listas simples** son estructuras de datos lineales que consisten en nodos donde cada nodo contiene un dato y un puntero al siguiente nodo. Las **listas circulares** son similares, pero el último nodo apunta de nuevo al primer nodo.

    Ejemplo 4: Lista Simple

    ```cpp
    #include <iostream>
    using namespace std;

    struct Nodo {
        int dato;
        Nodo* siguiente;
    };

    class ListaSimple {
    private:
        Nodo* cabeza;

    public:
        ListaSimple() {
            cabeza = nullptr;
        }

        void insertar(int valor) {
            Nodo* nuevo = new Nodo();
            nuevo->dato = valor;
            nuevo->siguiente = cabeza;
            cabeza = nuevo;
        }

        void mostrar() {
            Nodo* actual = cabeza;
            while (actual != nullptr) {
                cout << actual->dato << " -> ";
                actual = actual->siguiente;
            }
            cout << "NULL" << endl;
        }
    };

    int main() {
        ListaSimple lista;
        lista.insertar(10);
        lista.insertar(20);
        lista.insertar(30);
        lista.mostrar();

        return 0;
    }
    ```

    Ejemplo 5: Lista circular

    ```cpp
    #include <iostream>
    using namespace std;

    struct Nodo {
        int dato;
        Nodo* siguiente;
    };

    class ListaCircular {
    private:
        Nodo* cabeza;

    public:
        ListaCircular() {
            cabeza = nullptr;
        }

        void insertar(int valor) {
            Nodo* nuevo = new Nodo();
            nuevo->dato = valor;
            if (cabeza == nullptr) {
                cabeza = nuevo;
                nuevo->siguiente = cabeza;
            } else {
                Nodo* actual = cabeza;
                while (actual->siguiente != cabeza) {
                    actual = actual->siguiente;
                }
                actual->siguiente = nuevo;
                nuevo->siguiente = cabeza;
            }
        }

        void mostrar() {
            if (cabeza == nullptr) return;
            Nodo* actual = cabeza;
            do {
                cout << actual->dato << " -> ";
                actual = actual->siguiente;
            } while (actual != cabeza);
                cout << "cabeza" << endl;
        }
    };

    int main() {
        ListaCircular lista;
        lista.insertar(10);
        lista.insertar(20);
        lista.insertar(30);
        lista.mostrar();

        return 0;
    }
    ```

# Ejercicios

1. Crear una clase Coche con atributos marca, modelo y año. Implementar métodos para establecer estos atributos y un método para mostrar la información del coche.

2. Implementar una clase CuentaCorriente con atributos titular, saldo y limiteDeCredito. Incluir métodos para depositar, retirar y mostrar el saldo actual. Implementar constructores y destructores.

3. Desarrollar una lista simple que permita insertar elementos al final de la lista y mostrar todos los elementos de la lista.

4. Desarrollar una lista circular que permita insertar elementos al final de la lista y mostrar todos los elementos de la lista.

5. Modificar la clase Rectangulo para incluir un constructor que inicialice largo y ancho y un destructor que indique cuándo un objeto Rectangulo está siendo destruido.

6. Crear una clase Estudiante con atributos nombre, edad y grado. Implementar métodos para establecer estos atributos y un método para mostrar la información del estudiante. Implementar un constructor para inicializar los atributos y un destructor que indique cuándo un objeto Estudiante está siendo destruido.





