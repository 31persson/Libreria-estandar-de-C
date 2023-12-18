#include <stdio.h>
#include <string.h>

int main() {
    // Crea una cadena de caracteres
    char cadena[] = "Hola, mundo!";

    // Calcula la longitud de la cadena
    size_t longitud = strlen(cadena);

    // Imprime la longitud de la cadena
    printf("Longitud de la cadena: %zu\n", longitud);

    return 0;
}
