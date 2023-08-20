#include <stdio.h>

int main() {
    int Array_one[] = {1, 2, 3, 4, 5};
    int Array_two[] = {6, 7, 8, 9, 10};
    int size_one = sizeof(Array_one) / sizeof(Array_one[0]);
    int size_two = sizeof(Array_two) / sizeof(Array_two[0]);

    int common = 0;

    for (int i = 0; i < size_one; i++) {
        for (int j = 0; j < size_two; j++) {
            if (Array_one[i] == Array_two[j]) {
                common = 1;  // Common element found
                break;  // Exit the inner loop since we found a common element
            }
        }
        if (common) {
            break;  // Exit the outer loop as well since we found a common element
        }
    }

    if (common) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
