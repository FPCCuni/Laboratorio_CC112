# TAREAS
1. Crea un programa que permita gestionar una lista dinámica de contactos con la siguiente información: nombre, número de teléfono y dirección de correo electrónico.

    El programa debe permitir al usuario realizar las siguientes acciones:

    * Agregar un nuevo contacto.
        
    * Mostrar todos los contactos almacenados.

    * Buscar un contacto por nombre.
    
    * Eliminar un contacto
    
    * Cambiar dinámicamente el tamaño de la lista de contactos cuando sea necesario.

    Su implementación debe involucrar el uso de funciones y asignación dinámica de memoria de forma adecuada para manejar la lista de contactos. Desde la función main() debe proporcionar un menú que permita el uso interactivo de sus funciones.





2.  Implementar un programa que permita realizar algunas  operaciones en una cadena de caracteres. Por ejemplo puede contemplar las siguientes funciones

    * invertirCadena: que recibirá una cadena de caracteres como entrada y devolverá la cadena invertida.
    * contarPalabras: contará y devolverá la cantidad de palabras en la cadena.
    * buscarSubcadena: recibirá una cadena y una subcadena y devolverá todas las ocurrencias de la subcadena dada dentro de la cadena.

     * remplazaSubcadena: reemplazará todas las ocurrencias de una subcadena dada por otra subcadena especificada.

    Puede implementar otras funciones adicionales. Las funciones implementadas debe considerar, si es posible, el uso adecuado de asignación dinamica de memoria. Desde la función main() debe proporcionar un menú interactivo para que el usuario elija que operación realizar.

3. La biblioteca de su universidad requiere el desarrollo de un programa para gestionar la información disponible. El programa debe mantener un registro dinámico de los libros que están disponibles en la biblioteca. Sin embargo, debido a limitaciones de espacio en la base de datos es necesario que su programa implemente la capacidad de aumentar (para registrar libros nuevos por ejemplo) o disminuir (en situaciones en las que algunos libros son retirados de la biblioteca o se vuelven obsoletos) dinámicamente el tamaño del registro de libros. 

    Su tarea principal es la de implementar las siguiente funciones:

    a) Una función llamada agregarLibro que permita agregar un nuevo libro al registro de la biblioteca. Esta función debe aumentar dinámicamente el tamaño del arreglo que almacena los libros.

    b) Una función llamada eliminarLibro que permita eliminar un libro del registro de la biblioteca. Esta función debe disminuir dinámicamente el tamaño del arreglo para eliminar el libro seleccionado.