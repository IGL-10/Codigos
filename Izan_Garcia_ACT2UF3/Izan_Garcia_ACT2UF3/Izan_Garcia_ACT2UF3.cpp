#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 4

void Ejercicio1(); // He cambiado un poco la logica de las funciones porque el enunciado estaba un poco confuso, ahora cada funcion solo se enfoca en hacer una tarea como deberia ser.
void Ejercicio2();

void limpiarArray(int a[][3], int filas);  // He añadido el parametro filas a cada funcion para hacerlo mas escalable y controlar mejor los bucles.
void imprimeArray(int a[][3], int filas, int n); // Aqui he añadido n como parametro para sea capaz de imprimir el total.
void rellenarArray(int a[][3], int filas, int *n); // He cambiado de int a void porque no tenia sentido devolver nada.
void Jugar(FILE *datos, int *GanadosJugador, int *GanadosMaquina);

int main() 
{
	srand(time(NULL));

	//Ejercicio1();
	//Ejercicio2();

	return 0;
}

void Ejercicio1()
{
	int arr[FILAS][3];
	int n = 0;
	FILE* total;
	errno_t err;
	
	err = fopen_s(&total, "textos/total.txt", "w");
	if (err)
	{
		printf("Error al abrir el archivo\n");
		return;
	}

	limpiarArray(arr, FILAS);
	rellenarArray(arr, FILAS, &n);
	fprintf(total, "%d", n);
	imprimeArray(arr, FILAS, n);

	fclose(total);
}

void Ejercicio2()
{
	int GanadosJugador = 0;
	int GanadosMaquina = 0;
	FILE* datos;
	errno_t err;

	err = fopen_s(&datos, "textos/datos.txt", "w");
	if (err)
	{
		printf("Error al abrir el archivo\n");
		return;
	}

	Jugar(datos, &GanadosJugador, &GanadosMaquina);
	if (fprintf(datos, "Ganados Jugador %d Ganados Maquina %d", GanadosJugador, GanadosMaquina) >= 0) // Para si los datos se han añadido correctamente como ponia en la captura del enunciado he buscado que devuelve fprintf y si algo ha fallado devuelve un numero negativo.
	{
		printf("\nDatos anyadidos correctamente al fichero.\n");
	}
	else
	{
		printf("\nHa habido algun problema al escribir los datos en el fichero.\n");
	}

	fclose(datos);
}

void limpiarArray(int a[][3], int filas)
{
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			a[i][j] = 0;
		}
	}
}

void imprimeArray(int a[][3], int filas, int n)
{
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\nHay un total de %d numeros iguales o mas pequenos que 5\n", n);
}

void rellenarArray(int a[][3], int filas, int *n)
{
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("Dime un numero(fila %d, columna %d):  ", i, j);
			scanf_s("%d", &a[i][j]);

			if (a[i][j] <= 5) (*n)++;
		}
	}
}

void Jugar(FILE *datos, int* GanadosJugador, int* GanadosMaquina)
{
	int salir = 0;
	int apuesta;
	
	printf("Bienvenidos al juego de CARA o CRUZ\n\n");
	while (!salir)
	{
		int moneda = rand() % 2;
		do
		{
			printf("Dime tu apuesta CARA[0] CRUZ[1]: ");
			scanf_s("%d", &apuesta);
		} while (apuesta != 0 && apuesta != 1);
		fprintf(datos, "Moneda %d Apuesta %d\n", moneda, apuesta);

		if (moneda == apuesta) (*GanadosJugador)++;
		else (*GanadosMaquina)++;

		printf("\nQuieres volver a jugar? Si[0] No[1]: ");
		scanf_s("%d", &salir);
	}
}




