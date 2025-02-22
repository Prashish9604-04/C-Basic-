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

    int target;

    printf("Enter the target element: ");
    scanf("%d", &target);

    int count = 0;

    for (int i = 0; i < N; i++) {

        if (arr[i] == target) {

            count++;

        }

    }


    printf("Frequency of %d: %d\n", target, count);

}
