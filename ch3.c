#include <stdio.h>

int main() {
    int n, i, j, estPremier;

    printf("Entrez un entier n: ");
    scanf("%d", &n);

    printf("Les nombres premiers de 1 à %d sont :\n", n);

    for(i = 2; i <= n; i++) {
        estPremier = 1; 
        for(j = 2; j * j <= i; j++) 
        {
            if(i % j == 0) 
            {
                estPremier = 0;
                break;
            }
        }

        if(estPremier) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
