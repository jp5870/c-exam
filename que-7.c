// que-7 Print a below pattern using nested for loop in C language:
// _ _ _ _ 10

// _ _ _ 9 10

// _ _ 8 9 10

// _ 7 8 9 10

// 6 7 8 9 10

// Note: Consider _ as a whitespace.


#include <stdio.h>

int main() {
    int rows = 5;  
    int start = 10; 

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            printf("_ "); 
        }

        for (int j = start - i; j <= 10; j++) {
            printf("%d ", j); 
        }

        printf("\n");
    }

    return 0;
}