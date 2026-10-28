#include <stdio.h>

int main (){
    // long long ocupa 8 bytes 
    long long numeros[5]={10,20,30,40,50};
    long long *p;

    for (p=numeros; p<numeros+5; p++){
        printf("valor %ld, direccion %p\n", *p, p);
    }
    return 0;
}