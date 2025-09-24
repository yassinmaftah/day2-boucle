#include <stdio.h>


int         main()
{
    int     i;
    int     n;
    int     total;
    int         p;

    printf("Entre la valeur de number: ");
    scanf("%d", &n);
    printf("Entre la valeur de l'exposant: ");
    scanf("%d", &p);

    i = 0;
    total = 1;
    while (i < p)
    {
        total = total * n;
        i++;
    }
    printf("%d", total);
}