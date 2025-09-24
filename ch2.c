#include <stdio.h>

int main() {
    int rows = 7;
    int i = 1;

    while (i <= rows) {
        int j = 1;
        while (j <= rows - i) {
            printf(" ");
            j++;
        }

        j = 1;
        while (j <= 2 * i - 1) {
            printf("*");
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
