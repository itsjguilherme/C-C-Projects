#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");

    int numero, soma;
    int i = 1;

    printf("Digite um número inteiro: \n");
    scanf("%d", &numero);

    while (i <= numero) {
        soma = soma + i;
        i++;
    }

    printf("A soma dos %d primeiros números inteiros positivos é igual a %d \n", numero, soma);
}
