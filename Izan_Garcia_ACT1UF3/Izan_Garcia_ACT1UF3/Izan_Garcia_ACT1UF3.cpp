#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Menu();
void Gestor(FILE* f);
void PrestarLibro(FILE* f);
void DevolverLibro(FILE* f);
void VerEstadoLibro(FILE* f);

int main()
{
    FILE* log;
    errno_t err;

    err = fopen_s(&log, "textos/logs.txt", "a+");
    if (err)
    {
        printf("Error al abrir el archivo\n");
        return 0;
    }

    Gestor(log);

    fclose(log);
    log = NULL;

    return 0;
}

void Menu()
{
    printf("\n1. Prestar libro\n");
    printf("2. Devolver libro\n");
    printf("3. Ver estado de un libro\n");
    printf("0. Salir\n");
    printf("Opcion: ");
}

void Gestor(FILE* f)
{
    int opcion;

    do
    {
        Menu();
        scanf_s("%d", &opcion);
        getchar(); // limpio el salto de linea que deja scanf

        switch (opcion)
        {
        case 1:
            PrestarLibro(f);
            break;
        case 2:
            DevolverLibro(f);
            break;
        case 3:
            VerEstadoLibro(f);
            break;
        }
    } while (opcion != 0);
}

void PrestarLibro(FILE* f)
{
    int id;
    char isbn[20];
    char nombre[50];
    char autor[50];

    printf("ID: ");
    scanf_s("%d", &id);
    getchar(); // limpiar buffer

    printf("ISBN: ");
    gets_s(isbn, 20);

    printf("Nombre(Sin espacios): ");
    gets_s(nombre, 50);

    printf("Autor: ");
    gets_s(autor, 50);

    fprintf(f, "%d %s %s %s PRESTADO\n", id, isbn, nombre, autor);
}

void DevolverLibro(FILE* f)
{
    int id;
    char isbn[20];
    char nombre[50];
    char autor[50];

    printf("ID: ");
    scanf_s("%d", &id);
    getchar(); // limpiar buffer

    printf("ISBN: ");
    gets_s(isbn, 20);

    printf("Nombre(Sin espacios): ");
    gets_s(nombre, 50);

    printf("Autor: ");
    gets_s(autor, 50);

    fprintf(f, "%d %s %s %s DEVUELTO\n", id, isbn, nombre, autor);
}

void VerEstadoLibro(FILE* f)
{
    int idBuscado;
    int id;
    char isbn[20];
    char nombre[50];
    char autor[50];
    char estado[20];
    char ultimoEstado[20] = "";

    printf("Introduce el ID del libro: ");
    scanf_s("%d", &idBuscado);
    getchar(); // limpiar buffer

    rewind(f); // vuelvo al inicio del archivo para poder leerlo completo

    while (fscanf_s(f, "%d %s %s %s %s", &id, isbn, 20, nombre, 50, autor, 50, estado, 20) == 5)
    {
        if (id == idBuscado)
        {
            strcpy_s(ultimoEstado, 20, estado); // strcpy_s (string.h) copia una cadena en otra de forma segura y añade '\0'
        }
    }

    if (strcmp(ultimoEstado, "PRESTADO") == 0) // strcmp (string.h) compara dos cadenas caracter a caracter (ASCII) y devuelve 0 si son iguales
    {
        printf("\nEl libro esta PRESTADO\n");
    }
    else if (strcmp(ultimoEstado, "DEVUELTO") == 0) // si strcmp devuelve distinto de 0 significa que las cadenas no son iguales
    {
        printf("\nEl libro esta DEVUELTO\n");
    }
    else
    {
        printf("\nEse libro no existe en el log\n");
    }
}
