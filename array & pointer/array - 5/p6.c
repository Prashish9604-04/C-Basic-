#include <stdio.h>

int main() {
    int n, i, even_count = 0, odd_count = 0;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    int even_arr[even_count];
    int odd_arr[odd_count];

    int even_index = 0, odd_index = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_arr[even_index] = arr[i];
            even_index++;
        } else {
            odd_arr[odd_index] = arr[i];
            odd_index++;
        }
    }

    printf("Even array elements: ");
    for (i = 0; i < even_count; i++) {
        printf("%d ", even_arr[i]);
    }
    printf("\n");

    printf("Odd array elements: ");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd_arr[i]);
    }
    printf("\n");

    return 0;
}

