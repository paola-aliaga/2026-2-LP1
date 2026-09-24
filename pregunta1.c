#include <stdio.h>

int main (){
   unsigned int registro;
   unsigned char n;

  printf ("ingresar el registro");
  scanf("%d",&registro);
   printf("ingresar n");
   scanf("%c",&n);

   n=getchar();
   for (;;){

    for (int i=0;i<=31;i++){
        n=getchar();
    }

   if (n=='q'){
    printf("se termino \n");
    break; 
   }

    registro=registro |(1<<n);
    registro=registro &~(1<<n);

    if (!(registro | (1u<<n)){
        registro=registro &~(1<<n);
    }
    
    

 return 0;


}      


