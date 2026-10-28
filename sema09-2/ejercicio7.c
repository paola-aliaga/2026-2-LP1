#include <stdio.h>
int main() {
 int fila0[3] = {10, 20, 30};
 int fila1[3] = {40, 50, 60};
 int *filas[2] = {fila0, fila1};
 int **pptr = filas;
 for (int i = 0; i < 2; i++) {
 for (int j = 0; j < 3; j++) {
 printf("%d ", *(*(pptr + i) + j));
 }
 printf("\n");
 }
 return 0;
}