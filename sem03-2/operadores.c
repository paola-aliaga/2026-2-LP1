#include <stdio.h>

int main() {
    int a=25, b=7, c=129;

    printf("la suma de %d + %d es: %d\n", a, b, a+b);
    printf("la resta de %d - %d es: %d\n", a, b, a-b);
    printf("la multip de %d * %d es: %d\n", a, b, a*b);
    printf("la divi de (float)%d / %d es: %f\n", a, b, (float)a/b);
    printf("el resto (%%) de dividir %d entre %d es: %d\n", a, b, a%b);

    printf("\noperaciones de comparacion:\n");
    printf("a=%d\nb=%d\nc=%d\n", a, b, c);
    printf("¿%d > %d? es %d\n", a, b, a>b);
    printf("¿%d > %d? es %d\n", b, c, b>c);
    printf("%d > %d y %d > %d es %d\n", a, b,b,c,(a>b) && (b>c));
    printf("%d > %d o %d > %d es %d\n", a, b,b,c,(a>b) || (b>c));
    return 0;
}