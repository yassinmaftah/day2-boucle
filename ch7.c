#include <stdio.h>

int     main()
{
    int     n;
    int     a;
    int     b;
    int     k;
    int     i;

    printf("Entre la valeur de number: ");
    scanf("%d", &n);

    a = 0;
    b = 1;

    i = 0;
    printf("%d %d ", a, b);

    while (i <= n)
    { 
        k = a + b;
        printf("%d ", k);
        a = b;
        b = k;
        i++;
    }
}