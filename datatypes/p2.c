#include <stdio.h>

int main() {
    int num1 = 2;
    int num2 = 100;

    int sum = num1 + num2;
    printf("Sum: %d + %d = %d\n", num1, num2, sum);

    int difference = num1 - num2;
    printf("Difference: %d - %d = %d\n", num1, num2, difference);

    int product = num1 * num2;
    printf("Product: %d * %d = %d\n", num1, num2, product);

    if (num2 != 0) {
        int quotient = num1 / num2;
        printf("Quotient: %d / %d = %d\n", num1, num2, quotient);
    } else {
        printf("Cannot divide by zero!\n");
    }

    return 0;
}
