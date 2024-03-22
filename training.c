#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");
    for (c = 0; c < n; c++) {
        if (c <= 1)
            next = c;
        else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }
    printf("\n");
    return 0;
}
