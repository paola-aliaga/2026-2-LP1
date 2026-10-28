#include <stdio.h>

void agregar_uno(int n){ // se crea una copia de n, por lo que no se modifica el valor original
    n++;
    printf("El valor de n dentro de la función es: %d\n", n);
}

void agregar_uno2(int *n){//n es referencia (es la dirección de memoria de n)
    //por lo que se modifica el valor original
    (*n)++;
    printf("El valor de n dentro de la función es: %d\n", *n); //n es desreferencia 
}

int main (){
    int n=5;
    printf("sin usar referencia\n");
    printf("El valor de n antes de llamar a la función es: %d\n", n);
    agregar_uno(n);
    printf("El valor de n después de llamar a la función es: %d\n", n);
    printf("\n\nusando referencia\n");
    printf("El valor de n antes de llamar a la función es: %d\n", n);
    agregar_uno2(&n);
    printf("El valor de n después de llamar a la función es: %d\n", n);
    return 0;

    

}