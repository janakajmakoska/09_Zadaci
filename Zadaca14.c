#include <stdio.h>

void print_row(int n, int i) {
    if (i == n + 1) { // дневниот случај - крај на рекурзијата
        return;
    }
    
    int j;
    for (j = 1; j < i; j++) {
        printf("%d ", n - i + j + 1);
    }
    printf("%d\n", n - i + j + 1);
    
    // рекурзивно повиквање на функцијата
    print_row(n, i + 1);
}

int main() {
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    
    // повик на функцијата за генерирање на секоја редица
    print_row(n, 1);
    
    return 0;
}
