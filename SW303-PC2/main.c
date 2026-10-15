#include <stdio.h>
#include "racional.h"


int main(){
    int n1,d1,n2,d2,n_res,d_res;
    printf("ingresar el numerador del primer num");
    scanf("%d",&n1);
    printf("ingresr el ddenominador del primer num");
    scanf("%d",&d1);
    printf("ingresar el numerador del segundo num");
    scanf("%d",&n2);
    printf("ingresar el denominadr del segundo num");
    scanf("%d",&d2);
    

    sumar(n1,d1,n2,d2,&n_res,&d_res);
    return 0;
    

}


