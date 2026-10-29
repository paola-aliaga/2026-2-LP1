#include <ctype.h>
#include <stdio.h>
#include <string.h>
void contar_vocales(const char *texto, int *vocales, int *consonantes,int *digitos, int *otros){

    *vocales=0;
    *consonantes=0;
    *digitos =0;
    *otros = 0;

    for (const unsigned char *p = (const unsigned char *)texto; *p!='\0';++p) {
        int caracter = tolower(*p);
        if (caracter=='a' ||caracter =='e'|| caracter=='i'||caracter == 'o' || caracter == 'u') {
            ++*vocales;
        } else if (isalpha(*p)) {
            ++*consonantes;
        }       else if (isdigit(*p)) {
            ++*digitos;
        } else {
            ++*otros;
        }
    }
}


int main()
{
    char cadena[256]; 
    int vocales=0, consonantes=0,digitos=0,otros=0;

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof cadena);

    int longitud = strlen(cadena);
if (longitud>0 && cadena[longitud-1] == '\n') {
        cadena[longitud-1] = '\0';
    }
    contar_vocales(cadena, &vocales, &consonantes, &digitos, &otros);


    
    printf("Vocales: %d\n", vocales);
    printf("Consonantes: %d\n", consonantes);
    printf("Digitos: %d\n", digitos);
    printf("Otros: %d\n", otros);



    return 0;
}


