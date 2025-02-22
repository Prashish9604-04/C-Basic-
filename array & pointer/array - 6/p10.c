#include <stdio.h>

int main() {

    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");

    for (int i = 0; i < n; i++) {

        scanf("%d", &arr[i]);

    }

    printf("Array: ");

    for (int i = 0; i < n; i++) {

        printf("%d ", arr[i]);

    }

    printf("\n");


    if (n % 2 == 0) {

        printf("Alternate elements: ");

        for (int i = 0; i < n; i += 2) {

            printf("%d ", arr[i]);

        }

        printf("\n");

    } else {

        printf("Whole array: ");

        for (int i = 0; i < n; i++) {

            printf("%d ", arr[i]);

        }

        printf("\n");

    }

}
