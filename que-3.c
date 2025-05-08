// que-3 Write a C program that defines a function to print only odd elements from 1D array elements.

 #include <stdio.h>

void printOddElements(int arr[], int size) {
    printf("Odd elements in the array are: ");
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) { 
            printf("%d ", arr[i]);
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

    printOddElements(arr, size);

    return 0;
}