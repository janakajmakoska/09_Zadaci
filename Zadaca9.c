#include <stdio.h>

int main() {
    int n, i, j, x, k;
    printf("Enter the number of bacteria: ");
    scanf("%d", &n);
    printf("Enter the division time in minutes: ");
    scanf("%d", &i);
    printf("Enter the death time in minutes: ");
    scanf("%d", &j);
    printf("Enter the death rate as a percentage: ");
    scanf("%d", &x);
    printf("Enter the time in minutes: ");
    scanf("%d", &k);
    int t = n;
    for (int m = 0; m < k; m++) {
        if (m % i == 0) {
            t *= 2;
        }
        if (m % j == 0) {
            int deaths = (t * x) / 100;
            t -= deaths;
        }
    }
    printf("Number of bacteria after %d minutes: %d\n", k, t);
    return 0;
}
