#include <stdio.h>

//Ejercicio 1

/* Pedir y leer 2 números enteros; si los números son iguales multiplicarlos y mostrar el resultado, si el
primer número es mayor que el segundo, realizar una resta y mostrar el resultado, si no realizar una
suma y mostrarla por pantalla. */

/*
int main ()
{
	int num1, num2;

	int resultado;	

	printf("Introduce 2 numeros: ");                  // se podria hacer con 2 scanf y 2 printf
	scanf_s("%d %d", &num1, &num2);

	if (num1 == num2)
	{
		resultado = num1 * num2;
		printf("El resultado de la multiplicacion de %d y %d es %d\n", num1, num2, resultado);               // He puesto la variable resultado para guardar el valor en una variable pero se puede hacer directamente en el printf             
	}
	else if (num1 > num2)
	{
		resultado = num1 - num2;
		printf("El resultado de la resta de %d y %d es %d\n", num1, num2, resultado);
	}
	else 
	{
		resultado = num1 + num2;
		printf("El resultado de la suma de %d y %d es %d\n", num1, num2, resultado);
	}
	return 0;
}
*/

//Ejercicio 2

/* Pedir y leer tres números diferentes e imprimir el número mayor de los tres. */

/*
int main()
{
	int num1, num2, num3;

	printf("Introduce 3 numeros diferentes: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	if (num1 >= num2 && num1 >= num3)
	{
		printf("El numero mas grande es: %d\n", num1);                            // Tambien he probado crear un else if para el caso 3 y un else para 3 numeros iguales, si me introducen 7 2 2 es decir 2 numeros iguales pequeños no hay problema
	}
	else if (num2 >= num1 && num2 >= num3)                                        // pero si los que se repiten son grande 5 5 2 entonces salta directamente a else "los numeros introducidos son iguales" asi que esta es la manera mas correcta que he encontrado que si son iguales da el numero introducido.
	{
		printf("El numero mas grande es: %d\n", num2);
	}
	else
	{
		printf("El numero mas grande es: %d\n", num3);
	}

	return 0;
}
*/

// Ejercicio 3

/*Pedir por pantalla el número de horas trabajadas y determinar la cantidad de dinero que recibirá un
trabajador por concepto de las horas extras trabajadas en una empresa, sabiendo que cuando las horas
de trabajo exceden de 40, el resto se consideran horas extras y que estas se pagan al doble de una hora
normal, el precio hora es de 20€.*/

