#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *archivo = fopen("output.txt", "w");
    if (archivo == NULL)
    {
        perror("Error al abrir el archivo");
    }

    char mensaje[] = "Hola Jorge Ismael Tolaba";

    fprintf(stdout, "%s\n", mensaje);

    fprintf(archivo, "%s\n", mensaje);

    fclose(archivo);

    return 0;
}