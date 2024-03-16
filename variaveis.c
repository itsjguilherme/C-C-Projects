#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    //Permite usar acentos
    setlocale(LC_ALL, "");
    printf("Olá! \n");

    int a = 50;
    int b = 8;
    float c = 5.5;
    char letra = "v";

    printf("%d \n", a + b);

    printf("O valor de a é igual a %d \n", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d \n", a);

    printf("O valor de c é igual a %f \n", c);
    scanf("%f", &c);
    printf("O valor de a mudou para %f \n", c);

    printf("O valor de letra é igual a %c \n", letra);
    while(getchar()!= '\n');
    fflush(stdin);
    scanf("%c", &letra);
    printf("O valor de letra mudou para %c \n", letra);
}
