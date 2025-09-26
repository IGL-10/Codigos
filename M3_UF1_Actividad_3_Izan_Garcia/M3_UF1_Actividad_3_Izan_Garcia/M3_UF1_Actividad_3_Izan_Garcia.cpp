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

/*
int main ()
{
	const int combinacion_correcta = 2007;
	int combinacion;

	printf("Introduce la combinacion de la caja fuerte (4 digitos): ");
	scanf_s("%d", &combinacion);

	while (combinacion != combinacion_correcta)
	{
		printf("Lo siento, esa no es la combinacion\n");
		printf("Introduce la combinacion: ");
		scanf_s("%d", &combinacion);
	}
	
	printf("La caja fuerte se ha abierto satisfactoriamente\n");
	
	return 0;
}
*/

// ejercicio 8 BORRADOR  (Funciona pero me di cuenta tarde que no declare las variables de intentos)

/*Modifica el programa anterior para que tengamos cuatro oportunidades para abrir la caja
fuerte.*/

/*
int main()
{
	const int combinacion_correcta = 2007;
	int combinacion;

	printf("Introduce la combinacion de la caja fuerte (4 digitos): ");
	scanf_s("%d", &combinacion);

	while (combinacion != combinacion_correcta)
	{	
		int i;

		for (i = 1; i < 4 && combinacion != combinacion_correcta; i++)
		{
			printf("Lo siento, esa no es la combinacion\n");
			printf("Introduce la combinacion: ");
			scanf_s("%d", &combinacion);
		}

		if (i == 4)
		{
			printf("Te has quedado sin intentos\n");
			return 0;
		}
		
	}

	printf("La caja fuerte se ha abierto satisfactoriamente\n");

	return 0;
}
*/

// Ejercicio 8 FINAL (Mas escalable y correcto que el BORRADOR)

/*Modifica el programa anterior para que tengamos cuatro oportunidades para abrir la caja
fuerte.*/

/*
int main()
{
	int combinacion;
	const int combinacion_correcta = 2007;
	int intentos = 1;  // aqui declaro que intentos es igual a 1 porque siempre va a haber almenos un intento
	const int intentos_maximos = 4;

	printf("Introduce la combinacion de la caja fuerte (4 digitos): ");
	scanf_s("%d", &combinacion);

	while(combinacion != combinacion_correcta && intentos < intentos_maximos)     // si no declaramos que intetnos es igual a 1 aqui podriamos poner  - 1 porque si no serian 5 intentos, pero al final del codigo acabariamos con intentos = 3 aunque haya hecho 4, me parece mejor idea declarar que es = 1)          
	{
		
		printf("Lo siento, esa no es la combinacion. Te quedan %d intentos\n", intentos_maximos - intentos);
		printf("Introduce la combinacion: ");
		scanf_s("%d", &combinacion);
		intentos++;
	}
	
	if (combinacion == combinacion_correcta)
	{
		printf("La caja fuerte se ha abierto satisfactoriamente\n");
	}
	else
	{
		printf("Te has quedado sin intentos\n");
	}

	return 0;
}
*/

// Ejercicio 9

/*Realiza un programa que nos diga cuántos dígitos tiene un número introducido por teclado.*/

/*
int main()
{
	int num;
	int cifras = 0;        // declaro la variable porque si no puedo utilizarla en los if y while 

	printf("Introduce un numero: ");
	scanf_s("%d", &num);

	if (num == 0)
	{
		cifras++;               // compruebo que si el numero es 0 le ponga una cifra, porque en el while de abajo si lo permito poniendo num >= 0 me da bucle infinito
	}
	else if (num < 0)
	{
		num = -num;             // aqui convierto si nos ponen un numero negativo en positivo porque por ejemplo -100 tiene las mismas cifras que 100, pero con el negativo el codigo no funciona
	}

	while (num > 0)
	{
		num = num / 10;     // ire diviendo entre 10 el numero hasta llegar a 0 por cada vez que divida aumentare en 1 el valor de "cifras"
		cifras++;
	}

	printf("tu numero tiene %d cifras\n", cifras);

	return 0;
}
*/

// Ejercicio 10

/*10. Escribe un programa que diga si un número introducido por teclado es o no primo. Un número
primo es aquel que sólo es divisible entre él mismo y la unidad.*/

/*
int main()

{
	int num;
	int divisor_encontrado = 0;

	printf("Introduce un numero para saber si es primo o no: ");
	scanf_s("%d", &num);

	if (num <= 1)                                        // ponemos esta condicion para descartar los numeros 0 y 1 y los negativos
	{
		printf("Tu numero no es primo\n");
	}
	else
	{
		for (int i = 2; i < num; i++)              
		{
			if (num % i == 0)                //para saber si es primo o no utilizamos esta condicion que si el numero es divisible por algun numero entre 2 y el signfica que ya no es primo y hemos encontrado otro divisor aparte de 1 y el mismo
			{
				divisor_encontrado = 1;                         
				break;	                         // ponemos break para parar el bucle porque ya sabemos que no es primo
			}
		}
		if (divisor_encontrado == 0)
		{
			printf("Tu numero es primo\n");
		}
		else
		{
			printf("Tu numero no es primo\n");
		}
	}

	return 0;
}
*/