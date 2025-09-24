#include <stdio.h>

// Ejercicio 1

/* Muestra los números múltiplos de 5 de 0 a 100 utilizando un bucle for */

/*
int main()
{
	int num = 5;
	int resultado;

	for (int i = 1; i <= 20; i++)
	{
		resultado = num * i;
		printf("Resultado: %d\n", resultado);
	}
	return 0;
}
*/

// Ejercicio 2

/* Muestra los números múltiplos de 5 de 0 a 100 utilizando un bucle while */

/*
int main()
{
	int num = 5;
	int resultado;
	int i = 1;

	while (i <= 20)
	{
		resultado = num * i;
		printf("Resultado: %d\n", resultado);
		i++;
	}

	return 0;
}
*/

// Ejercicio 3

/*Muestra los números múltiplos de 5 de 0 a 100 utilizando un bucle do-while.*/

int main()
{
	int num = 5;
	int resultado;
	int i = 1;

	do
	{
		resultado = num * i;
		printf("Resultado: %d\n", resultado);
		i++;
	} while (i <= 20);

	return 0;
}


