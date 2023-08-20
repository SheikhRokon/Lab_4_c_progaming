#include <stdio.h>
#include <string.h>

void removeEmptyStrings(char *arr[], int *size) {
    int newSize = 0;

    for (int i = 0; i < *size; i++) {
        if (strlen(arr[i]) > 0) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    *size = newSize;
}

int main() {
    char *strings[] = {"Hello", "", "World", "", "Example", ""};
    int size = sizeof(strings) / sizeof(strings[0]);

    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", strings[i]);
    }

    removeEmptyStrings(strings, &size);

    printf("\nArray after removing empty strings:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
