#include <stdio.h>

void find_uncommon(int arr1[], int m, int arr2[], int n) {

    printf("Uncommon elements: ");

    for (int i = 0; i < m; i++) {

        int found = 0;

        for (int j = 0; j < n; j++) {

            if (arr1[i] == arr2[j]) {

                found = 1;

                break;

            }

        }

        if (!found) {

            printf("%d ", arr1[i]);

        }

    }


    for (int i = 0; i < n; i++) {

        int found = 0;

        for (int j = 0; j < m; j++) {

            if (arr2[i] == arr1[j]) {

                found = 1;

                break;

            }

        }

        if (!found) {

            printf("%d ", arr2[i]);

        }

    }

    printf("\n");

}

int main() {

    int m, n;

    printf("Enter the size of array 1: ");
    scanf("%d", &m);

    printf("Enter the size of array 2: ");
    scanf("%d", &n);

    int arr1[m], arr2[n];

    printf("Enter elements of array 1: ");

    for (int i = 0; i < m; i++) {

        scanf("%d", &arr1[i]);

    }

    printf("Enter elements of array 2: ");

    for (int i = 0; i < n; i++) {

        scanf("%d", &arr2[i]);

    }

    find_uncommon(arr1, m, arr2, n);

}

