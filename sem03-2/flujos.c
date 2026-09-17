#include <stdio.h>

int main (void){
    fprintf(stdout, "mensaje normal por stdout\n");
    fprintf(stderr, "mensaje de error por stderr\n");
    return 0;   
}

//prinft imprime en la salida estandar (stdout) 
//fprintf imprime en un archivo o flujo especifico.
