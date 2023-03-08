#include <stdio.h>
#include <stdbool.h>

bool has_all_digits(long long n) {
    int digits[10] = {0};
    while (n > 0) {
        digits[n % 10]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (digits[i] != 1) {
            return false;
        }
    }
    return true;
}

bool has_unique_digits(long long n) {
    int digits[10] = {0};
    while (n > 0) {
        digits[n % 10]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (digits[i] > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    long long n = 1023456789, square, cube;
    printf("Broevi cij kvadrat i kub gi sodrzhat site cifri od 0 do 9:\n");
    while (n <= 9876543210) {
        square = n * n;
        cube = n * n * n;
        if (has_all_digits(square) && has_unique_digits(square) && has_all_digits(cube) && has_unique_digits(cube)) {
            printf("%lld\n", n);
        }
        n++;
    }
    return 0;
}
