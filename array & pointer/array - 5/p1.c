#include <stdio.h>

int main() {
    int n, index, i;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index to find the element (0 to %d): ", n - 1);
    scanf("%d", &index);

    if (index >= 0 && index < n) {
        printf("Element at index %d: %d\n", index, arr[index]);
    } else {
        printf("Invalid index!\n");
    }

    return 0;
}
