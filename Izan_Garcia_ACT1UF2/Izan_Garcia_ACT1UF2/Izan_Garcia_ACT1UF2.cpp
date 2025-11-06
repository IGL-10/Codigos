#include <stdio.h>

void Ejercicio1();
void Ejercicio2();
void Ejercicio3();
void Ejercicio4();
void Ejercicio5();
void Ejercicio6();

int Par(int num);
int GetNumber();
float GetNumberReal();
float Media2(float num1, float num2);
void Media3(float num1, float num2, float num3);
void Saludo();
int Negativo(int num);
float Suma(float num1, float num2);
float Resta(float num1, float num2);
float Multiplicacion(float num1, float num2);
float Division(float num1, float num2);

int main()
{
	//Ejercicio1();  // 1. Realizar una función llamada par, que tenga un número entero como parámetro, y regrese 1 si es par o regrese 0 si es impar.
	//Ejercicio2();  // 2. Realizar una función llamada media2, que tenga dos números reales como parámetros, y regrese un número real que es la media de los 2.
	//Ejercicio3();  // 3. Realizar una función llamada media3, que tenga tres números reales como parámetros, y que no regrese nada. Esa función debe calcular la media de los tres números pasados como argumentos y mostrar con un mensaje con la media calculada.
	//Ejercicio4();  // 4. Realizar una función llamada saludo, que no tiene parámetros, y no regresa nada. Esta función debe mostrar un mensaje en pantalla : “Hola”.
	//Ejercicio5();  // 5. Realizar una función llamada negativo, que tenga un número entero como parámetro, y regrese 1 si es negativo o 0 si no lo es.
	//Ejercicio6();  // 6. Realizar 4 funciones, cada una debe hacer una operación matemática y retornar el resultado de la operación. Las operaciones deben ser: Suma, resta, multiplicación y división.Los valores se deben pasar mediante parámetros a la función.
	
	return 0;
}

void Ejercicio1()
{
	int num;

	num = GetNumber();
	
	if (Par(num))
	{
		printf("\nEl numero es PAR\n");
	}
	else
	{
		printf("\nEl numero NO es PAR\n");
	}
}

void Ejercicio2()
{
	float num1, num2;

	num1 = GetNumberReal();
	num2 = GetNumberReal();

	printf("\nLa media de los 2 numeros es %.2f\n", Media2(num1, num2));
}

void Ejercicio3()
{
	float num1, num2, num3;

	num1 = GetNumberReal();
	num2 = GetNumberReal();
	num3 = GetNumberReal();

	Media3(num1, num2, num3);
}

void Ejercicio4()
{
	Saludo();
}

void Ejercicio5()
{
	int num;

	num = GetNumber();

	if (Negativo(num))
	{
		printf("\nEl numero es NEGATIVO\n");
	}
	else
	{
		printf("\nEl numero NO es NEGATIVO\n");
	}
}

void Ejercicio6()
{
	float num1, num2;

	num1 = GetNumberReal();
	num2 = GetNumberReal();

	printf("\nSuma: %.2f Resta: %.2f Multiplacion: %.2f Division: %.2f\n", Suma(num1, num2), Resta(num1, num2), Multiplicacion(num1, num2), Division(num1, num2));
}

int Par(int num)
{
	return num % 2 == 0;
}

int GetNumber()
{
	int num;

	printf("Dime un numero: ");
	scanf_s("%d", &num);

	return num;
}

float GetNumberReal()
{
	float num;

	printf("Dime un numero: ");
	scanf_s("%f", &num);

	return num;
}

float Media2(float num1, float num2)
{
	return (num1 + num2) / 2;
}

void Media3(float num1, float num2, float num3)
{
	printf("\nLa media de los 3 numeros es %.2f\n", (num1 + num2 + num3) / 3);
}

void Saludo()
{
	printf("Hola\n");
}

int Negativo(int num)
{
	return num < 0;
}

float Suma(float num1, float num2)
{
	return num1 + num2;
}

float Resta(float num1, float num2)
{
	return num1 - num2;
}

float Multiplicacion(float num1, float num2)
{
	return num1 * num2;
}

float Division(float num1, float num2)
{
	if (num2 != 0)
	{
		return num1 / num2;
	}
	else
	{
		printf("\nError, no se puede dividir por 0!\n");
		return 0;
	}
}
