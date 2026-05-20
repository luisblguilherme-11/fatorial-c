#include <stdio.h>

int main()
{
    int numero;
    int resultado = 1;

    printf("\nDigite o numero: ")
    scanf("%d", &numero)

    
    resultado = fatorial(numero);

    printf("O fatorial de %d é %d",numero, resultado);

    }
