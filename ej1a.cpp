#include <stdio.h>
#include <stdlib.h>

int main() {
    // Ejemplo con números enteros, incluyendo negativos
    int num1 = 10;
    int num2 = -5;
    int num3 = 0;

    // Calcula el valor absoluto de los números
    int abs_num1 = abs(num1);
    int abs_num2 = abs(num2);
    int abs_num3 = abs(num3);

    // Muestra los resultados
    printf("Valor absoluto de %d: %d\n", num1, abs_num1);
    printf("Valor absoluto de %d: %d\n", num2, abs_num2);
    printf("Valor absoluto de %d: %d\n", num3, abs_num3);

    return 0;
}
