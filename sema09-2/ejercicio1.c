#include <stdio.h>

int main (){
int numeros[5]={10,20,30,40,50};
int *p=numeros;

printf("direccion inicial del puntero es %p\n", p);
for (int i=0;i<5;i++){
    printf("numeros[%d] = %d\n", i, *p);
    p++;
  }
  printf("direccion final del puntero es %p", p);
  return 0;

}