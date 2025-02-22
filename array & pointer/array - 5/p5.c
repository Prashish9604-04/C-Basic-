#include <stdio.h>

int main() {
    int n, i, even_sum = 0, odd_sum = 0;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_sum += arr[i] * arr[i];
        } else {
            odd_sum += arr[i] * arr[i];
        }
    }

    printf("Sum of squares of even elements: %d\n", even_sum);
    printf("Sum of squares of odd elements: %d\n", odd_sum);

    int diff = (even_sum > odd_sum) ? even_sum - odd_sum : odd_sum - even_sum;

    printf("Difference between the sum of squares of even and odd elements: %d\n", diff);

    return 0;
}
