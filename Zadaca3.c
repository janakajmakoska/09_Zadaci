#include <stdio.h>

int obratno(int broj) {
    int rezultat = 0;
    while (broj > 0) {
        int cifra = broj % 10;
        rezultat = rezultat * 10 + cifra;
        broj /= 10;
    }
    return rezultat;
}

int main() {
    int broj;
    printf("Внесете цел број: ");
    scanf("%d", &broj);
    int obraten_broj = obratno(broj);
    printf("Бројот со обратни цифри е: %d\n", obraten_broj);
    return 0;
}