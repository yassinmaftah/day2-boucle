#include <stdio.h>

int     main()
{
    int     number;
    int     invers;
    int     i = 0;

    printf("Entre la valeur de number: ");
    scanf("%d", &number);

    i = 0;
    invers = 0;
    while (number != 0)
    {
        invers = invers * 10 + (number % 10);
        number /= 10;
    }
    printf("la valeur de number invers est: %d", invers);
}