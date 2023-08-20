#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 5) {
        printf("Not possible\n");
        return 0;
    }

    int originalArray[n];
    int newArray[n - 4];

    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &originalArray[i]);
    }

    for (int i = 2; i < n - 2; i++) {
        newArray[i - 2] = originalArray[i];
    }

    printf("New array after excluding the first and last two elements: [");
    for (int i = 0; i < n - 4; i++) {
        printf("%d", newArray[i]);
        if (i != n - 5) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
