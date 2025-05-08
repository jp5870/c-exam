// que-2 Write a C program to find the average of all elements in a 2D array using a function./
#include <stdio.h>

float calculateAverage(int rows, int cols, int arr[rows][cols]) {
    int sum = 0;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    return (float)sum / (rows * cols);
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    float average = calculateAverage(rows, cols, arr);

    printf("\nThe average of all elements in the 2D array is: %.2f\n", average);

    return 0;
}

