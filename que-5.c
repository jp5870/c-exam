// que-5 Develop a C program that uses structures to represent a laptop (with attributes like company_name, processor, and price). List N number of laptop' details using Array of objects.

#include <stdio.h>

struct Laptop {
    char company_name[50];
    char processor[50];
    float price;
};

int main() {
    int n;

    printf("Enter the number of laptops: ");
    scanf("%d", &n);

    struct Laptop laptops[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for laptop %d:\n", i + 1);
        printf("Company Name: ");
        getchar();  
        fgets(laptops[i].company_name, sizeof(laptops[i].company_name), stdin);
        printf("Processor: ");
        fgets(laptops[i].processor, sizeof(laptops[i].processor), stdin);
        printf("Price: ");
        scanf("%f", &laptops[i].price);
    }

    printf("\nDetails of all laptops:\n");
    for (int i = 0; i < n; i++) {
        printf("\nLaptop %d:\n", i + 1);
        printf("Company Name: %s", laptops[i].company_name);
        printf("Processor: %s", laptops[i].processor);
        printf("Price: %.2f\n", laptops[i].price);
    }

    return 0;
}