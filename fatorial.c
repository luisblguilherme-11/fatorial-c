#include <stdio.h>

int fatorial(int n);

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Fatorial de %d = %d\n", numero, fatorial(numero));

    printf("\nFeito por Luís Guilherme ( https://github.com/luisblguilherme-11 ) ");

    return 0;
}
