#include <stdio.h>

int main() {
    int nombre;
    int i = 10;

    printf("Entrez un nombre: ");
    scanf("%d", &nombre);

    printf("Table de multiplication de %d en ordre décroissant:\n", nombre);

    while (i >= 1) {
        printf("%d x %d = %d\n", nombre, i, nombre * i);
        i--;
    }

    return 0;
}
