#include <stdio.h>

int main() {

    int N;

    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter the elements:\n");

    for (int i = 0; i < N; i++) {

        scanf("%d", &arr[i]);

    }

    int min = arr[0];

    for (int i = 1; i < N; i++) {

        if (arr[i] < min) {

            min = arr[i];

        }

    }

    printf("Smallest element: %d\n", min);

   
}
