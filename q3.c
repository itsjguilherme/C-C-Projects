#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int n,     /* guardara o numero dado                          */
      i,     /* contador = quantidade de impares ja' impressos  */
      impar; /* usado para gerar a sequencia de numeros impares */

  printf("\n\tGerador de numeros impares\n");

  /* Inicializacoes */
  printf("\nDigite o valor de n: ");
  scanf("%d", &n);
  i = 0;
  impar = 1;

  printf("Os %d primeiros impares sao:\n", n);
  while (i < n) {
    printf ("%d\n", impar);
    impar = impar + 2; /* vai para o proximo impar */
    i = i + 1;
  }

  return 0;
}
