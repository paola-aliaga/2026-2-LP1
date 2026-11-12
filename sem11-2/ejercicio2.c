#include <stdio.h>
#define ENERO 1
#define FEBRERO 2
#define MARZO 3
#define ABRIL 4

int main (){
int mes=3;
switch (mes)
{
case ENERO: printf("mes de enero"); break;
case FEBRERO: printf("mes de febrero"); break;
case MARZO: printf("mes de marzo");   break;  
case ABRIL: printf("mes de abril"); break;
case 5: printf("mes de mayo"); break;
case 6: printf("mes de junio");break;  
case 7: printf("mes de julio");break;
case 8: printf("mes de agosto"); break;
case 9: printf("mes de septiembre");break;
case 10: printf("mes de octubre"); break;
case 11: printf("mes de noviembre");break;
case 12: printf("mes de diciembre"); break;

default:
    break;
}





    return 0;
}