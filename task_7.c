#include <stdio.h>

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    if (size2 == 0) {
        printf("The second array is empty.\n");
        return 0;
    }

    array1[size1 - 1] = array2[0];

    printf("Modified array1 after replacing the last element with the first element of array2:\n");
    for (int i = 0; i < size1; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");

    return 0;
}
