#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");

    int numero, quadrado;

    printf("Digite uma sequência de números que deseja descobrir o quadrado, seguida de 0: \n");
    scanf("%d", &numero);

    while (numero != 0) {
        quadrado = numero * numero;

        printf("O quadrado de %d é igual a %d \n", numero, quadrado);
        printf("Digite o próximo número: \n");
        scanf("%d", &numero);
    }
}
