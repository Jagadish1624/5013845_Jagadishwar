#include <stdio.h>

void countingSort(int arr[], int n) {
    int count[1000] = {0}; 

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Print the count array
    for (int i = 0; i < 100; i++) {
        printf("%d ", count[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    countingSort(arr, n);
    return 0;
}
