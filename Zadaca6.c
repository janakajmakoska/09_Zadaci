#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j, sum, digit, num;
    printf("Vnesi broj: ");
    scanf("%d", &n);

    printf("Broevi koi imaat zbir na kubovite na cifrite ednakov na brojot se:\n");
    for (i = 1; i < n; i++) {
        num = i;
        sum = 0;
        while (num > 0) {
            digit = num % 10;
            sum += pow(digit, 3);
            num /= 10;
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
