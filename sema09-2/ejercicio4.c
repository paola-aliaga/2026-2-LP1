#include <stdio.h>
//recorriendo la memoria de los numeros char a char 
int main (){
    long long numeros[5]={10,20,30,40,50};
    char *p;
    p=(char *)numeros;
    for (int i=0;i<10;i++){
        printf("valor %d, direccion %p\n", *(p+i),(p+i)); 
    



    }



    return 0;
}