#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];
    int numbers[50];  // Assuming maximum 50 numbers
    int num_count = 0;

    printf("Enter numbers separated by spaces: ");
    fgets(input, sizeof(input), stdin);

    // Create array of numbers from input
    char *token = strtok(input, " ");
    while (token != NULL) {
        numbers[num_count] = atoi(token);
        num_count++;
        token = strtok(NULL, " ");
    }

    // Print the original array
    printf("Original array:\n");
    for (int i = 0; i < num_count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Remove even numbers
    int new_count = 0;
    for (int i = 0; i < num_count; i++) {
        if (numbers[i] % 2 != 0) {
            numbers[new_count] = numbers[i];
            new_count++;
        }
    }

    // Print the modified array without even numbers
    printf("Array after removing even numbers:\n");
    for (int i = 0; i < new_count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
