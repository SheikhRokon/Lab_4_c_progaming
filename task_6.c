#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[50];
    printf("Enter 7 numbers separated by commas: ");
    fgets(input, sizeof(input), stdin);

    int numbers[7];
    int largestValue = 0; // Assuming non-negative values
    int largestIndex = 0;

    char *token = strtok(input, ",");
    int index = 0;

    while (token != NULL && index < 7) {
        numbers[index] = atoi(token);

        if (numbers[index] > largestValue) {
            largestValue = numbers[index];
            largestIndex = index;
        }

        token = strtok(NULL, ",");
        index++;
    }

    printf("Array:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("Largest number: %d\n", largestValue);
    printf("Index of largest number: %d\n", largestIndex);

    return 0;
}
