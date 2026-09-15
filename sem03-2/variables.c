#include <stdio.h>
#include <string.h>
//string.h es una libreria que contiene funciones para trabajar con cadenas de caracteres(strlen)

int main() {
    int a=25;
    float b=7.5;
    double c=6.022e23;
    char d='A';
    char *nombre="UNI";

    printf("a=%d tiene %d bytes\n", a, sizeof(a));//numero de bytes que ocupa la variable a
    printf("b=%f ocupa %d bytes\n", b, sizeof(b));
    printf("c=%lf ocupa %d bytes\n", c, sizeof(c));
    printf("d=%c ocupa %d bytes\n", d, sizeof(d));
    printf("nombre=%s ocupa %d bytes y tiene %d caracteres\n", nombre, sizeof(nombre), strlen(nombre));
    //strlen(nombre) devuelve el numero de caracteres de la cadena nombre
    return 0;
}