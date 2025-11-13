#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3                // HE HECHO EL CODIGO ESCALABLE PARA PODER UNICAMENTE CAMBIANDO "SIZE" PODER JUGAR AL 3,4,5 etc EN RAYA

void Inicializar_Mapa(char map[SIZE][SIZE]);
void Mostrar_Mapa(char map[SIZE][SIZE]);
void Pedir_Ficha_Maquina(char map[SIZE][SIZE], int* intentos);
void Pedir_Ficha_Jugador(char map[SIZE][SIZE], int* intentos);
void Comprobar_Resultados(char map[SIZE][SIZE], int* terminar_jugador, int* terminar_maquina);
int Comprobar_Filas(char map[SIZE][SIZE]);
int Comprobar_Columnas(char map[SIZE][SIZE]);
int Comprobar_Diagonales(char map[SIZE][SIZE]);
void Iniciar_Juego();

int main()
{
	Iniciar_Juego();
}

void Inicializar_Mapa(char map[SIZE][SIZE])           // Relleno el mapa con '-'
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			map[i][j] = '-';
		}
	}
}

void Mostrar_Mapa(char map[SIZE][SIZE])         // Muestro el mapa
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf(" %c ", map[i][j]);
		}
		printf("\n");
	}
}

void Pedir_Ficha_Maquina(char map[SIZE][SIZE], int* intentos)   // Pido una ficha a la maquina aleatoria sin sobrescribir, marco en el mapa y resto intentos.
{
	int pos_maquina[2];

	do
	{
		for (int i = 0; i < 2; i++)
		{
			pos_maquina[i] = rand() % SIZE;
		}
	} while (map[pos_maquina[0]][pos_maquina[1]] != '-');
	map[pos_maquina[0]][pos_maquina[1]] = 'O';
	(*intentos)--;
}

void Pedir_Ficha_Jugador(char map[SIZE][SIZE], int* intentos)  // Pido una ficha al jugador, marco, y resto intentos.
{
	int pos_jugador[2];

	do
	{
		printf("Donde quieres colocar la ficha (fila,columna): ");

		for (int i = 0; i < 2; i++)
		{
			scanf_s("%d", &pos_jugador[i]);
		}
	} while (map[pos_jugador[0]][pos_jugador[1]] != '-');
	map[pos_jugador[0]][pos_jugador[1]] = 'X';
	(*intentos)--;
}

void Comprobar_Resultados(char map[SIZE][SIZE], int* terminar_jugador, int* terminar_maquina) // Desde esta funcion modifico los valores de las variables terminar jugador, dependiendo de si las otras funciones me devuelven 1 o 2.
{
	int resultado;

	resultado = Comprobar_Filas(map);
	if (resultado == 1)
	{
		*terminar_jugador = 1;
		return;
	}
	else if (resultado == 2)
	{
		*terminar_maquina = 1;
		return;
	}

	resultado = Comprobar_Columnas(map);
	if (resultado == 1)
	{
		*terminar_jugador = 1;
		return;
	}
	else if (resultado == 2)
	{
		*terminar_maquina = 1;
		return;
	}

	resultado = Comprobar_Diagonales(map);
	if (resultado == 1)
	{
		*terminar_jugador = 1;
		return;
	}
	else if (resultado == 2)
	{
		*terminar_maquina = 1;
		return;
	}
}

int Comprobar_Filas(char map[SIZE][SIZE])   // Compruebo las Filas
{
	for (int i = 0; i < SIZE; i++)
	{
		int linea_X = 1;             // Cuento que en la fila esta todo de x como si hubiera ganado.
		int linea_O = 1;			 // Lo hago dentro del primer bucle para que cada vez que compruebe una fila vuelva al valor "true" por si la primera por ejemplo no habia linea pero en la ultima si. 

		for (int j = 0; j < SIZE; j++)     // LO HE HECHO DE ESTA FORMA PARA QUE SEA ESCALABLE [3,4,5] EN RAYA!!!
		{
			if (map[i][j] != 'X')          // y si pasando por una fila alguna columna no tiene x pues sabemos que no ha ganado.   
				linea_X = 0;

			if (map[i][j] != 'O')
				linea_O = 0;
		}

		if (linea_X == 1) return 1;    // Si gana el jugador devuelvo 1.
		if (linea_O == 1) return 2;	   // Si gana la maquina devuelvo 2.
	}
	return 0;
}

int Comprobar_Columnas(char map[SIZE][SIZE]) // Compruebo las columnas 
{
	for (int j = 0; j < SIZE; j++) // Ahora para comprobar las columnas intercambio los bucles de I i J, tambien podria haber hecho map[j][i].
	{
		int linea_X = 1;
		int linea_O = 1;

		for (int i = 0; i < SIZE; i++) // LO HE HECHO DE ESTA FORMA PARA QUE SEA ESCALABLE [3,4,5] EN RAYA!!!
		{
			if (map[i][j] != 'X')
				linea_X = 0;

			if (map[i][j] != 'O')
				linea_O = 0;
		}

		if (linea_X == 1) return 1;
		if (linea_O == 1) return 2;
	}
	return 0;
}

int Comprobar_Diagonales(char map[SIZE][SIZE]) // Compruebo las diagonales
{
	int linea_X = 1;
	int linea_O = 1;

	for (int i = 0; i < SIZE; i++)
	{
		if (map[i][i] != 'X')
			linea_X = 0;

		if (map[i][i] != 'O')
			linea_O = 0;
	}

	if (linea_X == 1) return 1;
	if (linea_O == 1) return 2;

	linea_X = 1; // Despues de comprobar la primera diagonal vuelvo a poner los valores en "true".
	linea_O = 1;

	for (int i = 0; i < SIZE; i++)
	{
		if (map[i][SIZE - 1 - i] != 'X')
			linea_X = 0;

		if (map[i][SIZE - 1 - i] != 'O')
			linea_O = 0;
	}

	if (linea_X == 1) return 1;
	if (linea_O == 1) return 2;

	return 0;
}

void Iniciar_Juego()
{
	srand(time(NULL));
	char map[SIZE][SIZE];
	int continuar = 1;
	int victorias = 0;
	int derrotas = 0;
	int empates = 0;

	do
	{
		int terminar_jugador = 0;         // Creo las variables dentro del primero bucle para que cada vez que salga de la partida las reinicie.
		int terminar_maquina = 0;
		int intentos = SIZE * SIZE;

		Inicializar_Mapa(map);
		do
		{
			Pedir_Ficha_Maquina(map, &intentos);          // Pido ficha a la maquina, compruebo y muestro el mapa.
			Comprobar_Resultados(map, &terminar_jugador, &terminar_maquina);
			Mostrar_Mapa(map);
			if (terminar_jugador == 1 || terminar_maquina == 1 || intentos == 0) // Si alguien ha ganado o no hay intentos hago que salga del bucle para que no pida ficha al jugador.
			{
				break;
			}

			Pedir_Ficha_Jugador(map, &intentos);      // Pido fichar al jugador y compruebo.
			Comprobar_Resultados(map, &terminar_jugador, &terminar_maquina);
			if (terminar_jugador == 1 || terminar_maquina == 1 || intentos == 0) // Si ha ganado limpio el mapa de la maquina y muestro el mapa final.
			{
				system("cls");
				Mostrar_Mapa(map);
				break;
			}
			system("cls");      // Si no gana limpio el mapa de la maquina y el mapa siguiente que se muestra es el de la maquina con mi ficha y la sigueinte suya colocada.

		} while (terminar_jugador == 0 && terminar_maquina == 0 && intentos > 0);

		if (terminar_jugador == 1)
		{
			printf("Has ganado!\n");
			victorias++;
		}
		else if (terminar_maquina == 1)
		{
			printf("Has perdido!\n");
			derrotas++;
		}
		else
		{
			printf("Habeis empatado!\n");
			empates++;
		}

		printf("\nQuieres continuar? (1[si] 0[no]): ");
		scanf_s("%d", &continuar);
		system("cls");
	} while (continuar);

	printf("Victorias: %d Derrotas: %d Empates: %d\n", victorias, derrotas, empates);
}