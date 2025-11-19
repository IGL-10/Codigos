#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void Ejercicio1();
void Ejercicio2();
void Ejercicio3();
void Operacion(int n1, int n2, char oper, float *resul, int *error);
void Operacion2(int n1, int n2, char oper, float* resul, int* error, int* fact1, int* fact2);
int Menu();
int Menu2();
int Factorial(int num);

int main()
{
	//Ejercicio1();
	//Ejercicio2();
	//Ejercicio3();
	
}

void Ejercicio1()
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
	if (oper == 's') return;

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

void Ejercicio2()
{
	int n1, n2;
	char oper =' ';
	float resultado;
	int error;

	printf("Dime 2 numeros enteros: ");        
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
		return;
	case -1:
		printf("\nOperacion no valida!\n");
		return;
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

void Ejercicio3()
{
	int n1, n2;
	char oper = ' ';
	float resultado;
	int error;
	int fact1, fact2;

	printf("Dime 2 numeros enteros: ");
	scanf_s("%d %d", &n1, &n2);
	system("cls");

	switch (Menu2())
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
	case 6:
		oper = '!';
		break;
	case 0:
		return;
	case -1:
		printf("\nOperacion no valida!\n");
		return;
	}

	Operacion2(n1, n2, oper, &resultado, &error, &fact1, &fact2);

    if (oper == '!')
	{
		printf("\nEl factorial de %d es: %d\n", n1, fact1);
		printf("\nEl factorial de %d es: %d\n", n2, fact2);
	}
	else if (error != -1)
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

void Operacion2(int n1, int n2, char oper, float* resul, int* error, int* fact1, int* fact2)
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
	case '!':
		*fact1 = Factorial(n1);
		*fact2 = Factorial(n2);
		break;
	default:
		*error = -1;
		break;
	}
}

int Menu2()
{
	char oper;

	printf("MENU\n");
	printf("+ --> Sumar\n");
	printf("- --> Restar\n");
	printf("* --> Multiplicar\n");
	printf("/ --> Dividir\n");
	printf("^ --> Potencia\n");
	printf("! --> Factorial\n");
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
	case '!':
		return 6;
	case 's':
		return 0;
	default:
		return -1;
	}
}

int Factorial(int num)
{
	int fact = 1;

	for (int i = 1; i <= num; i++)
	{	
		fact *= i;
	}

	return fact;
}


