#include <stdio.h>


// Ejercicio 1

/*Diseñe un programa en C, que lea un vector de 20 posiciones, y luego determine:
-La suma de todos los valores
-El mayor de los valores, así como la posición del mismo.
Se sabe que dichos datos son de tipo entero.
El máximo se inicializa con el valor de la posición 0 del vector.*/

/*
int main()
{
	int v1[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int suma = 0;
	int max = v1[0];
	int posicion = 0;

	for (int i = 0; i < 20; i++)
	{
		printf("v1[%d] = %d\n", i, v1[i]);                               // Leemos el vector de 20 posiciones
		
		suma += v1[i];                                      // Sumamos todos los valores

		if (v1[i] > max)
		{
			max = v1[i];                                     // Sacamos cual es el valor mas grande y su posicion
			posicion = i;
		}
	}
	
	printf("\nLa suma de todos los valores es %d\n\n", suma);
	printf("El numero mas grande es %d y se encuentra en la posicion %d\n", max, posicion);

	return 0;	
}
*/

// Ejercicio 2

/*Diseñe un programa que lea un vector de 12 posiciones y guarde en un segundo vector el inverso del
primero y, en un tercer vector, una copia del primero sustituyendo los valores mayores que 5 por -1.
Al finalizar, el programa debe mostrar los tres vectores por pantalla.
Ejemplo:
Vector1 = [2,7,4,9,3,9,12,5,4,1,2,6]
Vector2 = [6,2,1,4,5,12,9,3,9,4,7,2]
Vector3 = [2,-1,4, -1,3, -1, -1,5 ,4,1,2, -1]*/

/*
#define SIZE 12
int main()
{
	int v1[SIZE] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int v2[SIZE];
	int v3[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		printf("v1[%d] = %d\n", i, v1[i]);            

		v2[i] = v1[SIZE - 1 - i];
		
		if (v1[i] > 5)
		{
			v3[i] = -1;
		}
		else
		{
			v3[i] = v1[i];
		}
	}

	printf("\n");

	for (int i = 0; i < SIZE; i++)
	{
		printf("v1[%d] = %d      v2[%d] = %d      v3[%d] = %d\n", i, v1[i], i, v2[i], i, v3[i]);        // He puesto que muestre los 3 arrays en un mismo printf para intentar optimiziar el codigo y la cantidad de linias, sale bien pero un poco descolocado porque los numeros que ocupan 2 huecos como 10 ocupan mas espacio que 1, y al estar en paralelo el v1 y el v2 que es invertido coinciden los de 2 huecos con los de 1.
		                                                                                                // He probado con %2d pero entonces los de 1 hueco se ven raros, para que quede mas limpio se podria hacer un bucle para cada array.
	}

	return 0;
}
*/

// Ejercicio 3

/*Realizar un algoritmo que solicite al usuario los elementos enteros de dos vectores de tres elementos y
calcule el producto escalar.
Ejemplo:
vector1[0]=12 vector1[1]=3 vector1[2]=4
vector2[0]=3 vector2[1]=1 vector2[2]=6
El resultado sería 63*/

/*
#define SIZE 3             

int main()
{
	int v1[SIZE];
	int v2[SIZE];
	int escalar = 0;

	for (int i = 0; i < SIZE; i++)                  // Con este bucle sacamos los 3 valores del v1
	{
		printf("Dime el numero %d del primer vector: ", i + 1);
		scanf_s("%d", &v1[i]);
	}

	printf("\n");   

	for (int i = 0; i < SIZE; i++)                    // Con este bucle sacamos los 3 valores del v2
	{
		printf("Dime el numero %d del segundo vector: ", i + 1);
		scanf_s("%d", &v2[i]);
	}

	printf("\n");   

	for (int i = 0; i < SIZE; i++)                              // Calculamos el producto escalar
	{
		escalar += v1[i] * v2[i];
	}

	printf("El producto escalar de los 2 vectores es: %d\n", escalar);

	return 0;
}
*/