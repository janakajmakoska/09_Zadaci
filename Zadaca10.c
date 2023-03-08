#include <stdio.h>

int main() {
  int n;
  printf("Vnesete ja dolzinata na nizata: ");
  scanf("%d", &n);

  int a[n];
  printf("Vnesete gi elementite na nizata:\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  printf("Site rastechki podnizi se:\n");
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j <= n; j++) {
      int is_increasing = 1;
      for (int k = i + 1; k < j; k++) {
        if (a[k] <= a[k - 1]) {
          is_increasing = 0;
          break;
        }
      }
      if (is_increasing) {
        for (int k = i; k < j; k++) {
          printf("%d ", a[k]);
        }
        printf("\n");
      }
    }
  }

  return 0;
}
