#include <stdio.h>

int main() {
    int numbers[5];
    int count = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
        count++;

        printf("Numbers in the array: [");
        for (int j = 0; j < count; j++) {
            printf("%d", numbers[j]);
            if (j != count - 1) {
                printf(", ");
            }
        }
        printf("]\n");
    }

    return 0;
}
