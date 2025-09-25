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

/*
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
*/

// Ejercicio 4

/*Muestra los números del 320 al 160, contando de 20 en 20 utilizando un bucle for.*/

/*
int main()
{
	int num = 320;
	int resultado;

	for (int i = 0; i <= 8; i++)
	{
		resultado = num - 20 * i;
		printf("Resultado: %d\n", resultado);
	}

	return 0;
}
*/

// Ejercicio 4 Version escalable (He pensado otra version del codigo pero para que sea mas escalable y poder modificar los valores)

/*Muestra los números del 320 al 160, contando de 20 en 20 utilizando un bucle for.*/

/*
int main()
{
	int num_inicio = 320;
	int num_final = 160;   // añadimos num final como variable para poder modificarlo
	int contador = 20;	   // añadimos la variable contador para poder modificar la cantidad de los saltos.
	
	printf("Introduce el numero de inicio: ");
	scanf_s("%d", &num_inicio);

	printf("Introduce el numero final: ");
	scanf_s("%d", &num_final);

	printf("Introduce de cuanto en cuanto quieres contar: ");
	scanf_s("%d", &contador);

	if (contador <= 0)          // Pongo que contador no puede ser 0 o menos porque si no nunca acabaria el bucle y mostraria todo el rato el numero de inicio, ademas por el orden de prioridad que vimos en clase tiene que estar la primera, si no entraria a los otros casos     
	{
		printf("Contador no puede ser igual o mas pequenyo que 0\n");
	}
	else if (num_inicio > num_final)
	{
		for (int i = num_inicio; i >= num_final; i -= contador)
		{
			printf("Resultado: %d\n", i);
		}                                                                           // hacemos un if para saber que numero es mas grande y poder contar de arriba a abajo o viceversa)
	}
	else if (num_inicio < num_final)
	{
		for (int i = num_inicio; i <= num_final; i += contador)       
		{
			printf("Resultado: %d\n", i);
		}
	}                                                                     
	else
	{
		printf("Los numeros son iguales\n");
	}

	return 0;
}
*/

// ejercicio 5   (lo voy a hacer escalable como el otro)

/*Muestra los números del 320 al 160, contando de 20 en 20 utilizando un bucle while.*/

/*
int main()
{
	int num_inicio;
	int num_final;
	int contador;

	printf("Introduce el numero de inicio: ");
	scanf_s("%d", &num_inicio);

	printf("Introduce el numero final: ");
	scanf_s("%d", &num_final);

	printf("Introduce de cuanto en cuanto quieres contar: ");
	scanf_s("%d", &contador);

	if (contador <= 0)
	{
		printf("Contador no puede ser igual o mas pequenyo que 0\n");
	}
	else if (num_inicio > num_final)
	{
		while (num_inicio >= num_final)
		{
			printf("Resultado: %d\n", num_inicio);
			num_inicio -= contador;
		}
	}
	else if (num_inicio < num_final)
	{
		while (num_inicio <= num_final)
		{
			printf("Resultado: %d\n", num_inicio);
			num_inicio += contador;
		}
	}
	else
	{
		printf("Los numeros son iguales\n");
	}

	return 0;
}
*/

// Ejercicio 6

/*Muestra los números del 320 al 160, contando de 20 en 20 utilizando un bucle do-while.*/

/*
int main()
{
	int num_inicio;
	int num_final;
	int contador;

	printf("Introduce el numero de inicio: ");
	scanf_s("%d", &num_inicio);

	printf("Introduce el numero final: ");
	scanf_s("%d", &num_final);

	printf("Introduce de cuanto en cuanto quieres contar: ");
	scanf_s("%d", &contador);

	if (contador <= 0)
	{
		printf("Contador no puede ser igual o mas pequenyo que 0\n");
	}
	else if (num_inicio > num_final)
	{
		do
		{
			printf("Resultado: %d\n", num_inicio);
			num_inicio -= contador;
		} while (num_inicio >= num_final);
	}
	else if (num_inicio < num_final)
	{
		do
		{
			printf("Resultado: %d\n", num_inicio);
			num_inicio += contador;
		} while (num_inicio <= num_final);
	}
	else
	{
		printf("Los numeros son iguales\n");
	}

	return 0;
}
*/

// Ejercicio 7

/*Realiza el control de acceso a una caja fuerte. La combinación será un número de 4 cifras. El
programa nos pedirá la combinación para abrirla. Si no acertamos, se nos mostrará el
mensaje “Lo siento, esa no es la combinación” y si acertamos se nos dirá “La caja fuerte se ha        
abierto satisfactoriamente”.*/

int main()
{
	
}
