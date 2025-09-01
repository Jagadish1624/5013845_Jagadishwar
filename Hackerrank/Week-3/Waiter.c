#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int getPrime(int index) {
    int count = 0, num = 2;
    while (1) {
        if (isPrime(num)) {
            count++;
            if (count == index) return num;
        }
        num++;
    }
}

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    int stack[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &stack[i]);
    }

    int top = n - 1;

    for (int i = 1; i <= q; i++) {
        int prime = getPrime(i);
        int A[n], B[n];
        int topA = -1, topB = -1;

        for (int j = top; j >= 0; j--) {
            if (stack[j] % prime == 0) {
                A[++topA] = stack[j];
            } else {
                B[++topB] = stack[j];
            }
        }

        for (int j = topA; j >= 0; j--) {
            printf("%d\n", A[j]);
        }

        top = topB;
        for (int j = 0; j <= topB; j++) {
            stack[j] = B[j];
        }
    }

    for (int j = top; j >= 0; j--) {
        printf("%d\n", stack[j]);
    }

    return 0;
}
