#include <stdio.h>
#include <math.h>
int main ()
{
    int n;
    float s,P,L;
    printf("Vnesi n i dolzina na strnata\n");
    scanf("%d",&n);
    scanf("%f",&s);
    P=(n*s*s)/(4*tan(3.14/n));
    L=n*s;
    printf(" Plostina: %f,Perimetar : %f",P,L);
    return 0;
}