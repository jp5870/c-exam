// que-4 Write a C program to find even elements from an 1D array using Pointer.
#include <stdio.h>

void printEvenElements(int *arr, int size) {
    printf("Even elements in the array are: ");
    
    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) { 
            printf("%d ", *(arr + i));
        }
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printEvenElements(arr, size);

    return 0;
}
