#include <stdio.h>
#include <assert.h>

int fatorial(int n);

int main()

{

    assert(fatorial(0) == 1);
    assert(fatorial(1) == 1);
    assert(fatorial(6) == 720);

    printf("Todos os testes passaram!\n");

    printf("\nFeito por Luís Guilherme ( https://github.com/luisblguilherme-11 ) ");

    return 0;
}
