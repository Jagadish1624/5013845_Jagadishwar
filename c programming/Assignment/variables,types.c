#include <stdio.h>
int main() {
    int a = 10;
    float b = 5.5;
    float result = a + b;  // implicit conversion
    int c = (int)b;        // explicit type casting
    printf("Result: %.2f, Casted value: %d\n", result, c);
    return 0;
}
