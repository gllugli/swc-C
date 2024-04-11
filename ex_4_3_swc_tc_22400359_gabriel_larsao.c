#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    char opcao;
    float x1, x2, soma, sub, mult, div;

    printf("\n1. Soma \n2. Subtração \n3. Multiplicação \n4. Divisão \n\nDigite qual operação você deseja realizar: ");
    opcao = getchar();

    switch(opcao) {
        case '1':
            printf("\nDigite o primeiro valor que será somado: ");
            scanf("%f", &x1);

            printf("\nDigite o segundo valor que será somado: ");
            scanf("%f", &x2);

            soma = x1 + x2;

            printf("\nO resultado da soma é: %.1f.", soma);
            break;

        case '2':
            printf("\nDigite o primeiro valor que será subtraído: ");
            scanf("%f", &x1);

            printf("\nDigite o segundo valor que será subtraído: ");
            scanf("%f", &x2);

            sub = x1 - x2;

            printf("\nO resultado da subtração é: %.1f.", sub);
            break;

        case '3':
            printf("\nDigite o primeiro valor que será multiplicado: ");
            scanf("%f", &x1);

            printf("\nDigite o segundo valor que será multiplicado: ");
            scanf("%f", &x2);

            mult = x1 * x2;

            printf("\nO resultado da multiplcação é: %.1f.", mult);
            break;

        case '4':
            printf("\nDigite o primeiro valor que será dividido: ");
            scanf("%f", &x1);

            printf("\nDigite o segundo valor que será dividido: ");
            scanf("%f", &x2);

            div = x1 / x2;

            printf("\nO resultado da divisão é: %.1f.", div);
            break;

        default: 
            printf("\nEsta opção não existe.");
    }

    return 0;
}