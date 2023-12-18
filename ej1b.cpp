#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Genera un número aleatorio sin cambiar la semilla
    printf("Numero aleatorio sin cambiar la semilla: %d\n", rand());

    // Establece la semilla utilizando el tiempo actual
    srand((unsigned int)time(NULL));

    // Genera números aleatorios después de cambiar la semilla
    printf("Numero aleatorio despues de cambiar la semilla: %d\n", rand());
    printf("Numero aleatorio despues de cambiar la semilla: %d\n", rand());
    printf("Numero aleatorio despues de cambiar la semilla: %d\n", rand());

    return 0;
}
