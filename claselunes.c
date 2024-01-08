#include <stdio.h>
#include <stdlib.h>
int sumar(int a, int b)
{
    return a + b;
}
// Le pongo void porque en los mismos parametros voy a usar el resultado
// & direccionamiento - sobre la direccion
// * indireccionamiento - sobre el contenido
void sumarPorReferencia(int *a, int *b, int *resultado){ // en este
 *resultado = *a + *b;
 printf("El resultado de la suma es: %d", *resultado);

}

int main()
{
    int num1, num2, suma = 0;
    printf("Ingrese el 1er valor:\n");
    scanf("%d", &num1);
    printf("Ingrese el 2do valor:\n");
    scanf("%d", &num2);

    suma = sumar(num1, num2);
    printf("El valor de la suma es: %d", suma);

    printf("\n\n");
    sumarPorReferencia(&num1, &num2, &suma);

    return 0;
}