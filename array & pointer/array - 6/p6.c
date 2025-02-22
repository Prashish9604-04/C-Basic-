#include <stdio.h>

int main() {

    int N;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter the elements of the array:\n");

    for (int i = 0; i < N; i++) {

        scanf("%d", &arr[i]);

    }


    int lower, upper;

    printf("Enter the lower bound of the range: ");
    scanf("%d", &lower);

    printf("Enter the upper bound of the range: ");
    scanf("%d", &upper);

    printf("Elements in the range [%d, %d]:\n", lower, upper);

    for (int i = 0; i < N; i++) {

        if (arr[i] >= lower && arr[i] <= upper) {

            printf("%d ", arr[i]);

        }

    }

    printf("\n");

}

