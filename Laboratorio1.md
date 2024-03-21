# PRÁCTICA DIRIGIDA 1

## 1. Configurando nuestro ambiente de trabajo 
  * Es libre de elegir el editor o IDE de su preferencia. Se recomienda utilizar Visual Stidio Code (VS Code).
  
  * Ilustramos la configuración de VS Code y C++ en un ambiente de Windows

    ![image](https://github.com/FPCCuni/FP-CC112/assets/164098903/e3b9c881-37d4-41c9-8de1-adddfbddc9bf)

    - Descaragar VS Code desde https://code.visualstudio.com/ e instalar
   
    - Abrir VC Code, en Extensiones instalar **C/C++ IntelliSense, debugging, and code browsing**.
   
    - Para configurar su entorno C++ (lenguaje compilado), debe de tener instalado un compilador. Puede
      comprobar si tiene instalado un compilador escribiendo ``g++ --version`` en la línea de comandos de Windows(cmd)
      
    - En caso contrario, proceda a instalar un compilador. Como ilustración instalamos el compilador
      GCC utilizando MinGW-w64. Para mayor detalles podemos revisar https://code.visualstudio.com/docs/cpp/config-mingw#_prerequisites

    - Una vez instalado el compilador, agregue la ruta a su carpeta MinGW-w64 a la PATH variable de entorno de Windows.
   
    - Finalmente verifique si su instalación se realizó correctamente, escribiendo en cmd
      
      ``g++ --version``
   
      ``gcc --version``
      
      ``gdb --version``
      
      este último, para comprobar que  el depurador gdb  ha sido instalado.


* **Compilando nuestro primer programa.** Un programa  se compila usando g++ de la siguiente namera

  ``g++ -std=c++11 main.cpp - o main``
  - g++ es el comando del compilador
 
  - -std=c++11 especifica la versión en la que queremos compilar
 
  - main.cpp es el archivo fuente
 
  - -o significa que está dando un nombre específico a su archivo  ejecutable
 
  - que en este caso es main
 
  - Puede omitirlo, en este caso basta poner  ``g++ -std=c++11 main.cpp``
    Su ejecutable sera de la forma a.out

 * Puede mejorar la configuración de VS Code de acuerdo a sus necesidades, por ejemplo, puede revisar  el siguiente
https:www.geeksforgeeks.org/how-to-setup-vscode-with-c-c-and-python-for-competitive-programming/



 ## 2.  Ejercicios de repaso 

  * **Paso por referencia y argumentos predeterminados** Usted se encuentra escribiendo un programa de procesamiento de imágenes
    y desea implementar una función para redimensionar una imagen. Sin embargo, a veces el usuario puede querer redimensionar
    la imagen solo horizontalmente o verticalmente, y otras veces puede querer redimensionarla tanto horizontal como verticalmente.
    Implemente una función versatil que se adapte a las necesidades del usuario.

  * **Tipos de recursividad** Implemente el factorial de un número utilizando los diferentes tipos de recursividad (simple, tail, múltiple, indirecta) 

  * **Funciones anónimas**
     1. Escriba un programa que use funciones anónimas y permita decidir si un número es par o impar
   
     2. Escriba un programa utilizando funciones anónimas que permita calcular la poponcia de dos enteros dados así como la suma de ellos.
   
   

