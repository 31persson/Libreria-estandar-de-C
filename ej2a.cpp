#include <stdio.h>
#include <string.h>

int main() {
    // Crea dos cadenas de caracteres
    char str1[] = "Hola";
    char str2[] = "Hola";
    char str3[] = "Mundo";

    // Compara las cadenas e imprime el resultado
    int resultado1 = strcmp(str1, str2);
    printf("Comparacion de str1 y str2: %d\n", resultado1);

    int resultado2 = strcmp(str1, str3);
    printf("Comparacion de str1 y str3: %d\n", resultado2);

    return 0;
}
