#include <stdio.h>
int contador(){
    static int clave = 0; // Variable estática (no puede ser accedida fuera de la función)
    int k=10;//variable efimera
    clave++;
    return clave;
}
int contador2(){
    int clave2= 0; // Variable local
    clave2++;
    return clave2;
}
int clave3=20; // Variable global
int contador3(){
    clave3++;
    return clave3;
}

int main (){

    int k=contador2(); //contador2() es una funcion que devuelve un valor, por lo que se puede asignar a una variable
    //tambien return puede devolver una dirección de memoria, por lo que se puede asignar a un puntero
   printf("se registra el alumno %d\n", contador2());
   printf("se registra el alumno %d\n", contador2());
   printf("se registra el alumno %d\n", contador2());
   printf("se registra el alumno %d\n", contador2());
   printf("\n");
   printf("se registra el alumno %d\n", contador());
   printf("se registra el alumno %d\n", contador());
   printf("se registra el alumno %d\n", contador());
   printf("se registra el alumno %d\n", contador());
   printf("\n ");
  // printf("%d\n", clave); no se puede acceder a la variable clave fuera de la función contador
  printf("contador3:%d\n", contador3());

    return 0;
}