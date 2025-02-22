#include <stdio.h>

void reverse_element(int num) {

    int reversed = 0;

    while (num != 0) {

        reversed = reversed * 10 + num % 10;

        num /= 10;

    }

    printf("%d ", reversed);

}


int main() {

    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");

    for (int i = 0; i < n; i++) {

        scanf("%d", &arr[i]);

    }

    printf("Reversed elements: ");

    for (int i = 0; i < n; i++) {

        reverse_element(arr[i]);

    }

    printf("\n");

}

