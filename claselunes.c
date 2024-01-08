#include<stdio.h>
#include<stdlib.h>
int sumar(int a, int b){
    return a + b;
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
    
    return 0;
}


