
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *arr = (int *)malloc(n * sizeof(int)); // allocate 5 ints

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign values using pointer arithmetic
    for (int i = 0; i < n; i++) {
        *(arr + i) = i * 10; // equivalent to arr[i]
    }

    // Print values
    for (int i = 0; i < n; i++) {
        printf("Element %d = %d\n", i, *(arr + i));
    }

    free(arr);
    return 0;
}
