#include <stdio.h>
#include <stdlib.h>
int main(void) {
 int n;
 printf("Cantidad de elementos: ");
 if (scanf("%d", &n) != 1 || n <= 0) {// si ingresa 0 el ingreso a tenido un error, esto es para evitar el error scanf en la lectura del valor además n debe ser positivo 
 printf("Cantidad invalida.\n");
 return 1;//si hay un error hay salida del sistema 
 }
 int *ptr = malloc((size_t)n * sizeof *ptr); //se reserva espacio para n enteros, si no hay espacio malloc retorna null y se termina el programa
  if (ptr == NULL) {
 printf("No se pudo reservar memoria.\n");
 return 1;
 }
 //pero si hay espacio se usa ese espacio llenandose con numeros (i+1)*10
 for (int i = 0; i < n; i++) {
 ptr[i] = (i + 1) * 10;
 }
 printf("Elementos del arreglo:\n");
 for (int i = 0; i < n; i++) {
 printf("%d ", *(ptr + i));
 }
 printf("\n");
 free(ptr);
 ptr = NULL;
 return 0;
}