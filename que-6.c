// que-6 Write a C program that writes any N number of fruits' name along with their color name in a file called data.txt by taking input from user dynamically.

#include <stdio.h>
#include <string.h>

int main() {
    int n;

    printf("Enter the number of fruits: ");
    scanf("%d", &n);

    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char fruit[50], color[50];

    for (int i = 0; i < n; i++) {
        getchar(); 
        printf("\nEnter the name of fruit %d: ", i + 1);
        fgets(fruit, sizeof(fruit), stdin);

        printf("Enter the color of fruit %d: ", i + 1);
        fgets(color, sizeof(color), stdin);

        fruit[strcspn(fruit, "\n")] = '\0';
        color[strcspn(color, "\n")] = '\0';

        fprintf(file, "Fruit: %s, Color: %s\n", fruit, color);
    }

    fclose(file);

    printf("\nFruits and their colors have been written to data.txt\n");

    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    char line[100];
    printf("\n--- Fruits and Colors from File ---\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line); 
    }

    fclose(file);
    return 0;
}
