#include <stdio.h>
#include <stdlib.h>

#define MAP_SIZE 10
#define SHIPS 3                      // lo de barcos y tamaño de los barcos sirven mientras supongamos que todos los barcos tienen el mismo tamaño
#define SHIPS_SIZE 3


int main()
{
	char mapa[MAP_SIZE][MAP_SIZE];
	int x;
	int y;
	int aciertos = 0;

		for (int i = 0; i < MAP_SIZE; i++)                                 // Relleno el mapa con '-'
		{
			for (int j = 0; j < MAP_SIZE; j++)
			{
				mapa[i][j] = '-';
			}
		}

	for (int i = 0; i < SHIPS; i++)
	{
		printf("Dime las cordenadas del %d barco (%d posiciones)\n", i + 1, SHIPS_SIZE);           // Pido las cordenas de los barcos, compruebo que esten dentro del mapa y que no se repitan posiciones.
		for (int j = 0; j < SHIPS_SIZE; j++)
		{
			printf("\nPosicion %d barco %d (fila columna): ", j + 1, i +1);
			scanf_s("%d %d", &x, &y);

			if (x < 0 || x >= MAP_SIZE || y < 0 || y >= MAP_SIZE) 
			{
				printf("\nFuera del mapa, repite.\n");
				j--; 
				continue;                                                                           // Utilizo el continue porque no quiero que siga con el codigo pero tampoco que se salga del bucle como un break asi que hacemos un continue y le restamos 1 a j para que no cuente la iteración.
			}
			if (mapa[x][y] == 'B')
			{
				printf("\nYa hay un barco en esa posicion, repite.\n");
				j--;
				continue;
			}
			mapa[x][y] = 'B';
		}
		printf("\n");
	}

	system("cls");     // Borro la pantalla para que no se vea donde se han colocado los barcos y quede mas limpio

	while (aciertos < SHIPS * SHIPS_SIZE)                // Empezamos el juego
	{
		printf("Te quedan %d posiciones!\n\n", SHIPS * SHIPS_SIZE - aciertos);
		printf("Donde quieres disparar? (fila columna):	");                               // Pido donde va a ser el disparo
		scanf_s("%d %d", &x, &y);
		printf("\n");

		if (x < 0 || x >= MAP_SIZE || y < 0 || y >= MAP_SIZE)
		{
			printf("Fuera del mapa, repite.\n\n");                    // Compruebo que el disparo este dentro de los limites del mapa
			continue;
		}

		if (mapa[x][y] == '-')
		{
			mapa[x][y] = 'O';
			printf("agua...\n\n");	
		}
		else if (mapa[x][y] == 'B')
		{
			mapa[x][y] = 'X';
			printf("Tocado!\n\n");
			aciertos++;
		}
		else
		{
			printf("Ya habias disparado en esta casilla\n\n");
		}

		for (int i = 0; i < MAP_SIZE; i++)                                 // Muestro el mapa pero ocultando donde estan los Barcos
		{
			for (int j = 0; j < MAP_SIZE; j++)
			{

				if (mapa[i][j] == 'B')
				{
					printf(" - ");
				}
				else
				{
					printf(" %c ", mapa[i][j]);
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("Has hundido todos los barcos!\n");

	return 0;
}