#include <stdio.h>

int main() {
    int array_one[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array_two[] = {10, 11, 12, -13, -14, -15, -16};
    int size_one = sizeof(array_one) / sizeof(array_one[0]);
    int size_two = sizeof(array_two) / sizeof(array_two[0]);

    int even_count = 0;
    for (int i = 0; i < size_one; i++) {
        if (array_one[i] % 2 == 0) {
            even_count++;
        }
    }
    for (int i = 0; i < size_two; i++) {
        if (array_two[i] % 2 == 0) {
            even_count++;
        }
    }

    int even_elements[even_count];
    int index = 0;

    for (int i = 0; i < size_one; i++) {
        if (array_one[i] % 2 == 0) {
            even_elements[index] = array_one[i];
            index++;
        }
    }
    for (int i = 0; i < size_two; i++) {
        if (array_two[i] % 2 == 0) {
            even_elements[index] = array_two[i];
            index++;
        }
    }

    printf("New array with even elements from both arrays:\n");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even_elements[i]);
    }
    printf("\n");

    return 0;
}
