#include <stdio.h>

int main() {
    int n;
    printf("Vnesi golemina na nizata: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Vnesi gi elementite na nizata: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Pilesti podnizi:\n");
    for (int i = 1; i < n - 1; i++) {
        if (a[i] > a[i-1] && a[i] < a[i+1] ) {
            printf("%d %d %d\n", a[i-1], a[i], a[i+1]);
        }
    }
    
    return 0;
}
