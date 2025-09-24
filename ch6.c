#include <stdio.h>

int     main()
{
    int     n;
    int     i;

    printf("Entre la valeur de number: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n)
    {
        if (n % i == 0)
            printf("%d ", i);
        i++;
    }
}