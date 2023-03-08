#include <stdio.h>

int reverse(int n) {
    int rev = 0, digit;
    while (n > 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}

int main() {
    int n1, n2, i, rev;
    printf("Vnesi interval [n1, n2]: ");
    scanf("%d %d", &n1, &n2);

    printf("Broevi koi se delivi so svojot sportiven broj se:\n");
    for (i = n1; i <= n2; i++) {
        rev = reverse(i);
        if (i % rev == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
