#include <stdio.h>

int main() {
    int num, i;

    printf("Enter Number: ");
    scanf("%d", &num);

    int table[10];

    for (i = 0; i < 10; i++) {
        table[i] = num * (i + 1);
    }

    int *ptr = table;

    printf("Table of %d:\n", num);
    for (i = 0; i < 10; i++) {
        printf("| %d ", *(ptr + i));
    }
    printf("|\n");

    return 0;
}
