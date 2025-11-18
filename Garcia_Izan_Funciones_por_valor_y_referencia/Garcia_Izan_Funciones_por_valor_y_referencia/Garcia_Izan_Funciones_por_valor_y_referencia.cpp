#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Ejercicio 1 
/*
void Operacion(int n1, int n2, char oper, float *resul, int *error);

int main()
{

	int n1, n2;
	char oper;
	float resultado;
	int error;

	printf("Dime 2 numeros enteros: ");        //validacion dentro de scanf == 0?
	scanf_s("%d %d", &n1, &n2);
	system("cls");

	printf("MENU\n");
	printf("+ --> Sumar\n");
	printf("- --> Restar\n");
	printf("* --> Multiplicar\n");
	printf("/ --> Dividir\n");
	printf("^ --> Potencia\n");
	printf("s --> Salir\n");
	printf("Elija opcion: ");
	scanf_s(" %c", &oper, 1);
	if (oper == 's') return 0;

	Operacion(n1, n2, oper, &resultado, &error);
	
	if (error != -1)
	{
		printf("\nEl resultado es: %.2f\n", resultado);
	}
	else
	{
		printf("\nOperacion no valida!\n");
	}
}

void Operacion(int n1, int n2, char oper, float *resul, int *error)
{
	*error = 1;

	switch (oper)
	{
		case '+':
			*resul = n1 + n2;
			break;
		case '-':
			*resul = n1 - n2;
			break;
		case '*':
			*resul = n1 * n2;
			break;
		case '/':
			if (n2 == 0) *error = -1;
			else *resul = (float)n1 / n2;
			break;
		case '^':
			*resul = pow(n1, n2);
			break;
		default:
			*error = -1;
			break;
	}
}
*/

/*
// Ejercicio 2
int Menu();
void Operacion(int n1, int n2, char oper, float *resul, int *error);

int main()
{

	int n1, n2;
	char oper;
	float resultado;
	int error;

	printf("Dime 2 numeros enteros: ");        //validacion dentro de scanf == 0?
	scanf_s("%d %d", &n1, &n2);
	system("cls");

	switch (Menu())
	{
		case 1:
			oper = '+';
			break;
		case 2:
			oper = '-';
			break;
		case 3:
			oper = '*';
			break;
		case 4:
			oper = '/';
			break;
		case 5:
			oper = '^';
			break;
		case 0:
			return 0;
		case -1:
			printf("\nOperacion no valida!\n");
			return 1;
	} 

	Operacion(n1, n2, oper, &resultado, &error);

	if (error != -1)
	{
		printf("\nEl resultado es: %.2f\n", resultado);
	}
	else
	{
		printf("\nOperacion no valida!\n");
	}
}

int Menu()
{
	char oper;

	printf("MENU\n");
	printf("+ --> Sumar\n");
	printf("- --> Restar\n");
	printf("* --> Multiplicar\n");
	printf("/ --> Dividir\n");
	printf("^ --> Potencia\n");
	printf("s --> Salir\n");
	printf("Elija opcion: ");
	scanf_s(" %c", &oper, 1);

	switch (oper)
	{
		case '+':
			return 1;
		case '-':
			return 2;
		case '*':
			return 3;
		case '/':
			return 4;
		case '^':
			return 5;
		case 's':
			return 0;
		default:
			return -1;
	}
}

void Operacion(int n1, int n2, char oper, float *resul, int *error)
{
	*error = 1;

	switch (oper)
	{
		case '+':
			*resul = n1 + n2;
			break;
		case '-':
			*resul = n1 - n2;
			break;
		case '*':
			*resul = n1 * n2;
			break;
		case '/':
			if (n2 == 0) *error = -1;
			else *resul = (float)n1 / n2;
			break;
		case '^':
			*resul = pow(n1, n2);
			break;
		default:
			*error = -1;
			break;
	}
}
*/
