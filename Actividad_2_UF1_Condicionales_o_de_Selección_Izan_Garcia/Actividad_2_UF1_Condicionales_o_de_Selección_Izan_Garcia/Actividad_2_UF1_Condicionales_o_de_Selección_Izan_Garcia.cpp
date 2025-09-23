#include <stdio.h>

//Ejercicio 1

/* Pedir y leer 2 números enteros; si los números son iguales multiplicarlos y mostrar el resultado, si el
primer número es mayor que el segundo, realizar una resta y mostrar el resultado, si no realizar una
suma y mostrarla por pantalla. */

/*
int main ()
{
	int num1, num2;

	int resultado;	

	printf("Introduce 2 numeros: ");                  // se podria hacer con 2 scanf y 2 printf
	scanf_s("%d %d", &num1, &num2);

	if (num1 == num2)
	{
		resultado = num1 * num2;
		printf("El resultado de la multiplicacion de %d y %d es %d\n", num1, num2, resultado);               // He puesto la variable resultado para guardar el valor en una variable pero se puede hacer directamente en el printf             
	}
	else if (num1 > num2)
	{
		resultado = num1 - num2;
		printf("El resultado de la resta de %d y %d es %d\n", num1, num2, resultado);
	}
	else 
	{
		resultado = num1 + num2;
		printf("El resultado de la suma de %d y %d es %d\n", num1, num2, resultado);
	}
	return 0;
}
*/

//Ejercicio 2

/* Pedir y leer tres números diferentes e imprimir el número mayor de los tres. */

/*
int main()
{
	int num1, num2, num3;

	printf("Introduce 3 numeros diferentes: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	if (num1 >= num2 && num1 >= num3)
	{
		printf("El numero mas grande es: %d\n", num1);                            // Tambien he probado crear un else if para el caso 3 y un else para 3 numeros iguales, si me introducen 7 2 2 es decir 2 numeros iguales pequeños no hay problema
	}
	else if (num2 >= num1 && num2 >= num3)                                        // pero si los que se repiten son grande 5 5 2 entonces salta directamente a else "los numeros introducidos son iguales" asi que esta es la manera mas correcta que he encontrado que si son iguales da el numero introducido.
	{																
		printf("El numero mas grande es: %d\n", num2);							  //tambien se podria con decimales.
	}
	else
	{
		printf("El numero mas grande es: %d\n", num3);
	}

	return 0;
}
*/

// Ejercicio 3

/*Pedir por pantalla el número de horas trabajadas y determinar la cantidad de dinero que recibira un
trabajador por concepto de las horas extras trabajadas en una empresa, sabiendo que cuando las horas
de trabajo exceden de 40, el resto se consideran horas extras y que estas se pagan al doble de una hora
normal, el precio hora es de 20€.*/

/*
int main()
{
	float horas_trabajadas, horas_extra;                                                   // horas extra solo se utiliza en el else, tambien se podria declarar ahi para gastar menos memoria pero no podriamos utilizarla en el resto del codigo          
	float precio_hora = 20.0f, precio_hora_extra = precio_hora * 2;                       // pongo la f para ahorrar memoria porque sin poner la f lo convierte a un double 
	float nomina;

	printf("Introduce el numero de horas trabajadas: ");
	scanf_s("%f", &horas_trabajadas);

	if (horas_trabajadas <= 40)
	{
		nomina = horas_trabajadas * precio_hora;
		printf("Tu salario esta semana es de: %.2f euros\n", nomina);
	}
	else
	{
		horas_extra = horas_trabajadas - 40;                                            // para saber las horas extra restamos 40 que es el limite antes de ser "extras" a las horas trabajadas.
		nomina = horas_extra * precio_hora_extra + precio_hora * 40;                   // no hacen falta parentesis por el orden de prioridad de las operaciones
		printf("Tu salario esta semana es de: %.2f euros\n", nomina);
	}
	return 0;
}
*/

// Ejercicio 4

/*Calcular el número de pulsaciones que debe tener una persona por cada 10 segundos de ejercicio
aerobico; la fórmula que se aplica cuando el sexo es femenino es: num_pulsaciones = (220 − edad)/10 y
si el sexo es masculino: num_pulsaciones = (210 − edad)/10*/

/*
int main()
{
	int edad, sexo;
	int num_pulsaciones;

	printf("Introduce tu edad: ");
	scanf_s("%d", &edad);

	printf("Introduce tu sexo (0 para Masculino y 1 para Femenino): ");
	scanf_s("%d", &sexo);

	switch (sexo)
	{
	case 0:
		num_pulsaciones = (210 - edad) / 10;
		break;

	case 1:
		num_pulsaciones = (220 - edad) / 10;
		break;

	default:
		printf("Te has equivocado\n");
		return 1;
	}
	printf("Tus pulsaciones cada 10 segundos son %d\n", num_pulsaciones);

	return 0;
}
*/

// Ejercicio 5

/*En una tienda se efectúa una promoción en la cual se hace un descuento sobre el valor de la compra total
según el color de la bolita que el cliente saque al pagar en caja. Si la bolita es de color blanco no se le
hará descuento alguno, si es verde se le hará un 10% de descuento, si es amarilla un 25%, si es azul un
50% y si es roja un 100%. Determinar la cantidad final que el cliente deberá pagar por su compra se sabe
que solo hay bolitas de los colores mencionados.
La codificación de las bolitas:
1-blanco
2-verde
3-amarilla
4-azul
5-roja
Pedir el color de la bolita y el total de la compra.*/

/*
int main()
{
	float precio, precio_final, porcentaje_descuento;
	int color_bolita;

	printf("Introduce el precio de la compra: ");
	scanf_s("%f", &precio);

	printf("Introduce el color de la bolita (1-blanco, 2-verde, 3-amarilla, 4-azul, 5-roja): ");
	scanf_s("%d", &color_bolita);

	switch (color_bolita)
	{
	case 1:
		porcentaje_descuento = 0.0f;
		break;
	case 2:
		porcentaje_descuento = 0.10f;
		break;
	case 3:
		porcentaje_descuento = 0.25f;
		break;
	case 4:
		porcentaje_descuento = 0.50f;
		break;
	case 5:
		porcentaje_descuento = 1.0f;
		break;
	default:
		printf("Te has equivocado\n");
		return 1;
	}
	precio_final = precio - (precio * porcentaje_descuento);                                                    // tambien podria haber hecho precio *(1 - porcentaje_descuento) 
	printf("El precio despues del descuento es %.2f euros\n", precio_final);

	return 0;
}
*/