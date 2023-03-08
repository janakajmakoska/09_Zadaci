#include <stdio.h>

int main() {
    int n, i, j, sum;
    printf("Vnesi broj: ");
    scanf("%d", &n);

    printf("Sovrshenite broevi pomali od %d se:\n", n);
    for (i = 1; i < n; i++) {
        sum = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
