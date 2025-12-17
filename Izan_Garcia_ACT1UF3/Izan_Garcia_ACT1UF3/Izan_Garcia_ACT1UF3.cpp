#include <stdio.h>
#include <string.h>

void Menu();
void Gestor(FILE* f, FILE* f2);
void PrestarLibro(FILE* f);
void DevolverLibro(FILE* f);
void VerEstadoLibro(FILE* f, FILE* f2);

int main()
{
    FILE* log;
    FILE* log2;
    errno_t err;
    errno_t err2;

    err = fopen_s(&log, "textos/prestados.txt", "a+");
    if (err)
    {
        printf("Error al abrir el archivo\n");
        return 0;
    }

    err2 = fopen_s(&log2, "textos/devueltos.txt", "a+");
    if (err2)
    {
        printf("Error al abrir el archivo\n");
        return 0;
    }

    Gestor(log, log2);

    fclose(log);
    fclose(log2);

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

void Gestor(FILE* f, FILE *f2)
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
            DevolverLibro(f2);
            break;
        case 3:
            VerEstadoLibro(f, f2);
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

void VerEstadoLibro(FILE* f, FILE* f2)
{
    int id, id2;
    char isbn[20], nombre[50], autor[50], estado[20];
    char isbn2[20], nombre2[50], autor2[50], estado2[20];
    int devuelto;

    rewind(f);

    while (fscanf_s(f, "%d %s %s %s %s", &id, isbn, 20, nombre, 50, autor, 50, estado, 20) == 5)
    {
        devuelto = 0;
        rewind(f2);

        while (fscanf_s(f2, "%d %s %s %s %s", &id2, isbn2, 20, nombre2, 50, autor2, 50, estado2, 20) == 5)
        {
            if (id == id2)
            {
                devuelto = 1;
                break;
            }
        }

        if (devuelto)
        {
            printf("Libro %s -> DEVUELTO\n", nombre);
        }
        else
        {
            printf("Libro %s -> PRESTADO\n", nombre);
        }
    }
}
