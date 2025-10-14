#include <stdio.h>
#include <string.h>

// Ejercicio 1

/*Dada una palabra realizar las siguientes operaciones
a. Leerla y escribir la palabra dada
b. Escribir la palabra al revés
c. Sacar un mensaje en donde diga si la palabra es palíndroma
Ejemplo:
Dame una palabra: radar
La palabra dada es : radar
La palabra al revés es: radar
La palabra es palíndroma*/

/*
int main()
{
	char palabra[50];
	char palabra_invertida[50];
	
	printf("Dime una palabra: ");
	gets_s(palabra);
	int tam_palabra = strlen(palabra);             // Guardo el tamaño de la palabra en una variable para no tener que estar calculando todo el rato.

	printf("\nLa palabra es: %s\n", palabra);

	for (int i = 0; i < tam_palabra; i++)
	{
		palabra_invertida[i] = palabra[tam_palabra - 1 - i];           // Para invertir la palabra guardo los ultimos caracteres de palabra en los primeros de palabra invertida.
	}
	palabra_invertida[tam_palabra] = '\0';                             // Cada string tiene que terminar en \0 y en el bucle de invertir si intentabamos añadirlo se guardaria en la primera posicion de invertida y queremos que este en la ultima, asi que la añado aqui fuera

	printf("\nLa palabra al reves es: %s\n", palabra_invertida);

	if (strcmp(palabra, palabra_invertida) == 0)                      // Mirando la libreria string.h y buscando la forma de comparar strings he visto que podemos utilizar strcmp, si las palabras son iguales nos devolvera 0.
	{
		printf("\nLa palabra es palindroma\n");
	}
	else
	{
		printf("\nLa palabra no es palindroma\n");
	}

	return 0;
}
*/

// Ejercicio 2

/*2. Escribir un programa que lea una frase y determine la frecuencia de aparición de cada vocal con
respecto al total de caracteres de la frase.
Dame una frase: Hola a todos

La frase es de 12
La letra o aparece 3 veces en un total de 12
La letra a aparece 2 veces en un total de 12*/

/*
int main()
{
	char frase[100];
	int contador_a = 0, contador_e = 0, contador_i = 0, contador_o = 0, contador_u = 0;

	printf("Dime una frase: ");
	gets_s(frase);
	int tam_frase = strlen(frase);

	for (int i = 0; i < tam_frase; i++)
	{
		switch (frase[i])                            
		{
			case 'A':                               // Como aun no hemos visto como pasar la frase a minusculas para contar he tenido que poner 2 casos por letra, 1 en mayuscula y otro en minuscula.
			case 'a':
				contador_a++;
				break;
			case 'E':
			case 'e':
				contador_e++;
				break;
			case 'I':
			case 'i':
				contador_i++;
				break;
			case 'O':
			case 'o':
				contador_o++;
				break;
			case 'U':
			case 'u':
				contador_u++;
				break;
		}
	}

	printf("\nLa frase es de %d caracteres\n", tam_frase);
	
	char vocales[5] = { 'a','e','i','o','u' };
	int contadores[5] = { contador_a, contador_e, contador_i, contador_o, contador_u };                  // Para ahorrar bastante codigo me guardo los valores de los contadores y las vocales en arrays para poder pasarlas por un bucle.
	
	for (int i = 0; i < 5; i++)
	{
		if (contadores[i] > 0)
		{
			printf("La letra %c aparece %d veces\n", vocales[i], contadores[i]);
		}
	}
	
	return 0;
}
*/

// Ejercicio 3

/*Escribe un programa que lea del teclado una cadena y construya y muestre en la pantalla otra cadena
en la que cada vocal haya sido remplazada por un punto.*/

/*
int main()
{
	char frase[100];
	char frase_modificada[100];

	printf("Dime una frase: ");
	gets_s(frase);
	int tam_frase = strlen(frase);

	for (int i = 0; i < tam_frase; i++)
	{
		if (frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u' && frase[i] != 'A' && frase[i] != 'E' && frase[i] != 'I' && frase[i] != 'O' && frase[i] != 'U') // lo mismo que el otro ejercicio, cuando veamos como pasarlo a minuscula nos ahorraremos codigo.
		{
			frase_modificada[i] = frase[i];
		}
		else
		{
			frase_modificada[i] = '.';
		}
	}
	frase_modificada[tam_frase] = '\0';

	printf("\n%s\n", frase_modificada);

	return 0;
}
*/

