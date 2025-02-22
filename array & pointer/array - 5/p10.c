#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter %d elements of array 1:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements of array 2:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Before swapping:\n");
    printf("Array 1: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Array 2: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    for (i = 0; i < n; i++) {
        int temp = arr1[n - i - 1];
        arr1[n - i - 1] = arr2[i];
        arr2[i] = temp;
    }

    printf("After swapping:\n");
    printf("Array 1: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Array 2: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
