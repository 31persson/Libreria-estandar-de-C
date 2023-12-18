#include <stdio.h>

int main() {
    // Nombre del archivo
    const char *nombreArchivo = "mi_archivo.txt";

    // Intenta abrir el archivo en modo lectura ("r")
    FILE *archivo = fopen(nombreArchivo, "r");

    // Verifica si la apertura fue exitosa
    if (archivo != NULL) {
        printf("El archivo se abrió correctamente.\n");

        // Aquí puedes realizar operaciones en el archivo

        // Cierra el archivo después de usarlo
        fclose(archivo);
    } else {
        // Muestra un mensaje de error si no se pudo abrir el archivo
        printf("Error al abrir el archivo.\n");
    }

    return 0;
}
