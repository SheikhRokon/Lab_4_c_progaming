#include <stdio.h>

int main() {
    int numbers[5];

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Numbers in reverse order: ");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

void squareArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * arr[i];
    }
}

int main() {
    int numbers[] = {2, 5, 8, 10, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    squareArray(numbers, size);

    printf("Array after squaring: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
