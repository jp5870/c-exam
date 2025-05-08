// que-7 Print a below pattern using nested for loop in C language:
// _ _ _ _ 10

// _ _ _ 9 10

// _ _ 8 9 10

// _ 7 8 9 10

// 6 7 8 9 10

// Note: Consider _ as a whitespace.

#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4 - i; j++) {
            printf("  ");
        }

        for (j = 10 - i; j <= 10; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
