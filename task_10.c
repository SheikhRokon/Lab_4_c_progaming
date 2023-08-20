#include <stdio.h>
#include <stdlib.h>

int isDuplicate(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return 1;  // Found a duplicate
        }
    }
    return 0;  // No duplicate found
}

int main() {
    char input[100];
    int numbers[50];  // Assuming maximum 50 numbers
    int num_count = 0;

    printf("Enter numbers separated by commas: ");
    fgets(input, sizeof(input), stdin);

    // Create array of numbers from input
    char *token = strtok(input, ",");
    while (token != NULL) {
        int num = atoi(token);
        if (!isDuplicate(numbers, num_count, num)) {
            numbers[num_count] = num;
            num_count++;
        }
        token = strtok(NULL, ",");
    }

    // Print the modified array without duplicates
    printf("Array without duplicate values:\n");
    for (int i = 0; i < num_count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
