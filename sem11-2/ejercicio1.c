#include <stdio.h>
/*

struct Dato{
    int entero; //4bytes +1 de finalizacion
    float decimal;//4bytes +1 de finalizacion
    char caracter; //1byte +1 de finalizacion
};
*/
//toma la dimension de memoria del atributo que tiene mayor tamaño de memoria 

union Dato{
    int entero; 
    float decimal;
    char caracter; 
};
int main(){
    union Dato u1;
    union Dato *x;
    x= &u1;
    u1.decimal=3.14;
    printf("(desde el puntero) el decimal es: %f\n", x->decimal);
    u1.entero = 120;
    printf("el valor del entero es: %d\n", u1.entero);
    printf("el valor del decimal es: %f\n", u1.decimal);

    printf("el tipo entero ocupa %d bytes\n", sizeof(int));
    printf("el tipo float ocupa %d bytes\n", sizeof(float));
    printf("el tipo char ocupa %d bytes\n", sizeof(char));
    printf("un tipo de dato del tipo union dato ocupa %d bytes\n", sizeof(union Dato));

    return 0;
}