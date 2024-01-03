#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
    char variableCaracter;
    char *m;
    variableCaracter = 'X';
    m = &variableCaracter;
    printf("%c %x", variableCaracter, m); // Se esta imprimiendo el dato y la direcci'on de memoria del mismo
    // El lenguaje C me permite acceder a secciones especificas de memoria
    // El %x es para ver la direcci'on hexagesimal
    */

   int variableEntera, *n;
   variableEntera = 500;
   n = &variableEntera;
   printf("%d %x", variableEntera, n);
    return 0;
}
