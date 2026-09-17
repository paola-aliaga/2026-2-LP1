#include <stdio.h>

unsigned int contar_unos(unsigned int n) {
 int cuenta = 0;
 while (n) {
 n &= (n - 1); // borra el bit 1 menos significativo
 cuenta++;
 }
 return cuenta;
}

int main(void) {
    unsigned int n = 29; 
    unsigned int cuenta = contar_unos(n);
    printf("El numero %u tiene %u bits encendidos (1s)\n", n, cuenta);
    return 0;
}
