#include <stdio.h>

int main() {
    // Nombre del archivo
    const char *nombreArchivo = "mi_archivo.txt";

    // Abre el archivo para escribir ("w")
    FILE *archivo = fopen(nombreArchivo, "w");

    // Verifica si la apertura fue exitosa
    if (archivo != NULL) {
        // Escribe en el archivo usando fprintf()
        fprintf(archivo, "Hola, esto es un ejemplo de escritura en un archivo de texto.\n");

        // Cierra el archivo después de escribir
        fclose(archivo);

        // Abre el archivo para lectura ("r")
        archivo = fopen(nombreArchivo, "r");

        // Verifica si la apertura para lectura fue exitosa
        if (archivo != NULL) {
            char buffer[100];

            // Lee desde el archivo usando fscanf()
            while (fscanf(archivo, "%99[^\n]\n", buffer) == 1) {
                printf("Contenido leido desde el archivo: %s\n", buffer);
            }

            // Cierra el archivo después de leer
            fclose(archivo);
        } else {
            // Muestra un mensaje de error si no se pudo abrir el archivo para lectura
            printf("Error al abrir el archivo para lectura.\n");
        }
    } else {
        // Muestra un mensaje de error si no se pudo abrir el archivo para escritura
        printf("Error al abrir el archivo para escritura.\n");
    }

    return 0;
}
