#include <stdio.h>

int main() {
    int a = 4, b = 8;
    int *p = &a;
    int *q = &b;
    int **r = &p;

    *r = q;
    **r = **r + a;
    q = &a;
    *q = *q + b;

    printf("%d %d\n", a, b);
    printf("%d %d\n", *p, *q);

    return 0;
}