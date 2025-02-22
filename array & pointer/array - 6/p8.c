#include <stdio.h>

int sum_of_digits(int num) {

    int sum = 0;

    while (num != 0) {

        sum += num % 10;

        num /= 10;

    }

    return sum;

}


int main() {

    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");

    for (int i = 0; i < n; i++) {

        scanf("%d", &arr[i]);

    }


    printf("Elements with even sum of digits:\n");

    for (int i = 0; i < n; i++) {

        if (sum_of_digits(arr[i]) % 2 == 0) {

            printf("%d\n", arr[i]);

        }

    }

}
