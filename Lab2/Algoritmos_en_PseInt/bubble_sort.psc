Algoritmo bubble_sort
	Definir temp, tam, a como Entero;
	
	tam = 5;
	Dimension a[tam];
	
	Para i = 0 Hasta tam-1 Hacer
		Escribir "Ingrese el elemento ", i;
		Leer a[i]; 
	FinPara
	
	Escribir i;
	
	Para i = 0 Hasta tam-1 - 1 Hacer //tam - 1 número de pasadas
		Para j = 0 Hasta tam -1 - 1 - i Hacer // intercambios
			Si a[j] > a[j+1] Entonces // condición oodenamiento
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp; 
			FinSi
		FinPara
	FinPara
	
	para j=0 Hasta tam-1 Hacer
		Escribir a[j], " "; 
	FinPara
	
FinAlgoritmo
